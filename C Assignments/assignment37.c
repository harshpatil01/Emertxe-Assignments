#include <stdio.h>
#include <stdlib.h>

void readValues(int **fragments, int *columns, int rowSize) {
    for (int i = 0; i < rowSize; ++i) {
        printf("Enter %d values for row[%d]: ", columns[i], i);
        for (int j = 0; j < columns[i]; ++j) {
            scanf("%d", &fragments[i][j]);
        }
    }
}

void calculateAverages(int **fragments, float *averages, int *columns, int rowSize) {
    for (int i = 0; i < rowSize; ++i) {
        float sum = 0.0;
        for (int j = 0; j < columns[i]; ++j) {
            sum += fragments[i][j];
        }
        averages[i] = sum / columns[i];
        fragments[i][columns[i]] = averages[i]; // Store average in extra memory block
    }
}

void swapRows(int **fragments, float *averages, int i, int j) {
    int *tempRow = fragments[i];
    fragments[i] = fragments[j];
    fragments[j] = tempRow;

    float tempAvg = averages[i];
    averages[i] = averages[j];
    averages[j] = tempAvg;
}

void sortFragments(int **fragments, float *averages, int rowSize) {
    for (int i = 0; i < rowSize - 1; ++i) {
        for (int j = 0; j < rowSize - i - 1; ++j) {
            if (averages[j] > averages[j + 1]) {
                swapRows(fragments, averages, j, j + 1);
            }
        }
    }
}

void printFragments(int **fragments, int *columns, float *averages, int rowSize) {
    printf("Before Sorting output is:\n");
    for (int i = 0; i < rowSize; ++i) {
        for (int j = 0; j < columns[i] + 1; ++j) {
            printf("%d ", fragments[i][j]);
        }
        printf("\n");
    }

    printf("After Sorting output is:\n");
    for (int i = 0; i < rowSize; ++i) {
        for (int j = 0; j < columns[i] + 1; ++j) {
            printf("%d ", fragments[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rowSize;

    // Read the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rowSize);

    int **fragments = (int **)malloc(rowSize * sizeof(int *));
    int *columns = (int *)malloc(rowSize * sizeof(int));
    float *averages = (float *)malloc(rowSize * sizeof(float));

    // Read the number of columns for each row
    for (int i = 0; i < rowSize; ++i) {
        printf("Enter the number of columns in row[%d]: ", i);
        scanf("%d", &columns[i]);
        fragments[i] = (int *)malloc((columns[i] + 1) * sizeof(int)); // Extra memory for average
    }

    // Read values from the user
    readValues(fragments, columns, rowSize);

    // Calculate averages and store in the extra memory block
    calculateAverages(fragments, averages, columns, rowSize);

    // Sort fragments based on averages
    sortFragments(fragments, averages, rowSize);

    // Print the output
    printFragments(fragments, columns, averages, rowSize);

    // Free allocated memory
    for (int i = 0; i < rowSize; ++i) {
        free(fragments[i]);
    }
    free(fragments);
    free(columns);
    free(averages);

    return 0;
}
