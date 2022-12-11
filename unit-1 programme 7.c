/*Wap to find all even numbers in a matrix and display its count in advance c.*/

#include <stdio.h>

int main()
{
    int matrix[10][10];
    int count = 0;

    int row, col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("\nEnter matrix values: \n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe even numbers in the matrix are: \n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(matrix[i][j] % 2 == 0)
            {
                printf("%d  ", matrix[i][j]);
                count++;
            }
        }
    }

    printf("\nThe count of even numbers in the matrix is: %d", count);

    return 0;
}
