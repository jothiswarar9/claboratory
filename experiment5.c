#include<stdio.h>
int main()
{
  int a[50],b[10][10];
  int n,row,cols;
  int i,j,sum1,sum2;
  sum1=0;
  sum2=0;
  printf("Enter the number of elements in 1D array:");
  scanf("%d",&n);
  printf("Enter %d elements:\n",n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("\n1D Array Elements:\n");
  for(i=0;i<n;i++)
  {
      printf("%d",a[i]);
      sum1=sum1+a[i];
  }
  printf("\nsum of 1D array=%d", sum1);
  printf("\n\nEnter the number of rows in 2D array:");
  scanf("%d",&row);
  printf("Enter the number of rows in 2D array :");
  scanf("%d",&cols);
  printf("Enter the elements of 2D array:\n");
  for(i=0;i<row;i++)
  {
      for(j=0;j<cols;j++)
      {
          scanf("%d",&b[i][j]);
      }
  }
  printf("\n2D Array Element:\n");
  for(i=0;i<row;i++)
  {
      for(j=0;j<cols;j++)
      {
          printf("%d\t",b[i][j]);
          sum2=sum2+b[i][j];
      }
      printf("\n");
  }
  printf("sum of 2D Array=%d", sum2);
  return 0;
}

