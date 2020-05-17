#include <stdio.h>
int ROWS=3,COLS=3;
void inputMatrix(int matrix[][COLS], int rows, int cols);
void printMatrix(int matrix[][COLS], int rows, int cols);
void diagonal(int matrix[][COLS],int rows,int cols);
int main()
{
    int matrix[ROWS][COLS];
    int i, j;
    printf("Enter elements in %dx%d matrix.\n", ROWS, COLS);
    inputMatrix(matrix, ROWS, COLS);
    printf("Elements of %dx%d matrix.\n", ROWS, COLS);
    printMatrix(matrix, ROWS, COLS);
    diagonal(matrix, ROWS, COLS);
    return 0;
}
void inputMatrix(int matrix[][COLS], int rows, int cols)
{
    int i, j;
    for(i=0;i<rows;i++)
  {
      for(j=0;j<cols;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",(*(matrix + i) + j));
      }
  }
}
void printMatrix(int matrix[][COLS], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            // *(*(matrix + i) + j) is equivalent to matrix[i][j]
            printf("%d ", *(*(matrix + i) + j));
        }

        printf("\n");
    }
}
void diagonal(int matrix[3][3], int rows, int cols)
{
    int sum1=0,sum2=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(i==j)
            {
                sum1=sum1+ matrix[i][j];
            }
        }
    }
    printf("\n sum of left diagonal elements = %d",sum1);
    for (int i = 0; i < rows; ++i)
        {
            sum2 = sum2 + matrix[i][rows - i - 1];
        }
        printf("\n sum of right diagonal elements = %d",sum2);
}
