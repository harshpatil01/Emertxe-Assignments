/* Output :
harsh@harsh-VirtualBox:~$ ./a.out
Enter rows of matrix:
 3
Enter columns of matrix:
 3
Enter value of a[1][1]: 1
Enter value of a[1][2]: 2
Enter value of a[1][3]: 3
Enter value of a[2][1]: 1
Enter value of a[2][2]: 2
Enter value of a[2][3]: 3
Enter value of a[3][1]: 1
Enter value of a[3][2]: 2
Enter value of a[3][3]: 3
The entered matrix is
    1   2   3
   1   2   3
   1   2   3
The transpose of the entered matrix is
    1   1   1
   2   2   2
   3   3   3

Answer:
  14  14  14
  14  14  14
  14  14  14
*/




#include<stdio.h>
int main()
{
 int a[10][10],b[10][10],mul[10][10],m,n,i,j,k;
 char option;
 do
 {
 printf("Enter rows of matrix: \n ");
 scanf("%d",&m);
 printf("Enter columns of matrix: \n ");
 scanf("%d",&n);
 for(i=1;i<=m;i++)
 {
  for(j=1;j<=n;j++)
  {
   printf("Enter value of a[%d][%d]: ",i,j);
   scanf("%d",&a[i][j]);
   b[j][i]=a[i][j];
  }
 }

printf("The entered matrix is \n "); 
 for(i=1;i<=m;i++)
 {
  for(j=1;j<=n;j++)
  {
   printf("%4d",a[i][j]);
  }
  printf("\n");
 }
 

 printf("The transpose of the entered matrix is \n ");
  for(i=1;i<=m;i++)
   {
    for(j=1;j<=n;j++)
    {
    printf("%4d",b[i][j]);
   }
    printf("\n");
   }

 

 //Printing the result of the multiplication of the entered matrix and the transpose of the matrix
 printf("\nAnswer:\n");
 for(i=1;i<=m;i++)
 {
  for(j=1;j<=m;j++)
  {
   mul[i][j]=0;
   for(k=1;k<=n;k++)
    mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
   printf("%4d",mul[i][j]);
  }
  printf("\n");
 }
 
 printf("Do you want to continue : Y or N ? \n");
 getchar();
 scanf("%c",&option);
 if(option == 'Y' || option == 'y')
 {
	 continue;
 }
 else
 {
	 break;
 }
 }while(1)
}
