#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks[10]; // Assuming a maximum of 10 subjects
    float average;
    char grade;
};

void displayAllStudentDetails(struct Student students[], int numStudents, int numSubjects, char subjectNames[][50]) {
    printf("Roll No.\tName\t\t");
    for (int j = 0; j < numSubjects; ++j) {
        printf("%s\t", subjectNames[j]);
    }
    printf("Average\tGrade\n");

    for (int i = 0; i < numStudents; ++i) {
        printf("%d\t\t%s\t\t", students[i].rollNo, students[i].name);
        for (int j = 0; j < numSubjects; ++j) {
            printf("%.2f\t", students[i].marks[j]);
        }
        printf("%.2f\t%c\n", students[i].average, students[i].grade);
    }
}

void displayParticularStudentDetails(struct Student students[], int numStudents, int numSubjects, char subjectNames[][50]) {
    int subChoice;
    printf("\n----Menu for Particular student----\n");
    printf("1. Name.\n");
    printf("2. Roll no.\n");
    printf("Enter your choice : ");
    scanf("%d", &subChoice);

    if (subChoice == 1) {
        char studentName[50];
        printf("Enter the name of the student : ");
        scanf("%s", studentName);

        printf("Roll No.\tName\t\t");
        for (int j = 0; j < numSubjects; ++j) {
            printf("%s\t", subjectNames[j]);
        }
        printf("Average\tGrade\n");

        for (int i = 0; i < numStudents; ++i) {
            if (strcmp(students[i].name, studentName) == 0) {
                printf("%d\t\t%s\t\t", students[i].rollNo, students[i].name);
                for (int j = 0; j < numSubjects; ++j) {
                    printf("%.2f\t", students[i].marks[j]);
                }
                printf("%.2f\t%c\n", students[i].average, students[i].grade);
                break;
            }
        }
    } else if (subChoice == 2) {
        int studentRoll;
        printf("Enter the roll no. of the student : ");
        scanf("%d", &studentRoll);

        printf("Roll No.\tName\t\t");
        for (int j = 0; j < numSubjects; ++j) {
            printf("%s\t", subjectNames[j]);
        }
        printf("Average\tGrade\n");

        for (int i = 0; i < numStudents; ++i) {
            if (students[i].rollNo == studentRoll) {
                printf("%d\t\t%s\t\t", students[i].rollNo, students[i].name);
                for (int j = 0; j < numSubjects; ++j) {
                    printf("%.2f\t", students[i].marks[j]);
                }
                printf("%.2f\t%c\n", students[i].average, students[i].grade);
                break;
            }
        }
    } else {
        printf("Invalid choice.\n");
    }
}

int main() {
    int numStudents, numSubjects;

    // Read the number of students and subjects
    printf("Enter no. of students: ");
    scanf("%d", &numStudents);

    printf("Enter no. of subjects: ");
    scanf("%d", &numSubjects);

    // Read subject names
    char subjectNames[numSubjects][50];
    for (int i = 0; i < numSubjects; ++i) {
        printf("Enter the name of subject %d: ", i + 1);
        scanf("%s", subjectNames[i]);
    }

    // Declare an array of structures to store student records
    struct Student students[numStudents];

    // Read student details
    for (int i = 0; i < numStudents; ++i) {
        printf("----------Enter the student details-------------\n");
        printf("Enter the student Roll no. : ");
        scanf("%d", &students[i].rollNo);

        printf("Enter the student %d name : ", i + 1);
        scanf("%s", students[i].name);

        // Read marks for each subject
        for (int j = 0; j < numSubjects; ++j) {
            printf("Enter %s mark : ", subjectNames[j]);
            scanf("%f", &students[i].marks[j]);
        }

        // Calculate average
        float totalMarks = 0.0;
        for (int j = 0; j < numSubjects; ++j) {
            totalMarks += students[i].marks[j];
        }
        students[i].average = totalMarks / numSubjects;

        // Assign grades based on average
        if (students[i].average >= 90) {
            students[i].grade = 'A';
        } else if (students[i].average >= 80) {
            students[i].grade = 'B';
        } else if (students[i].average >= 70) {
            students[i].grade = 'C';
        } else {
            students[i].grade = 'F';
        }
    }

    // Display menu
    int choice;
    printf("\n----Display Menu----\n");
    printf("1. All student details\n");
    printf("2. Particular student details\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Display all student details
            displayAllStudentDetails(students, numStudents, numSubjects, subjectNames);
            break;

        case 2:
            // Display particular student details
            displayParticularStudentDetails(students, numStudents, numSubjects, subjectNames);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}


