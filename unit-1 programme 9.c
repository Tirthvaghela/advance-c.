/*Wap to check whether the matrix is identity matrix or not advance c.*/

#include <stdio.h>
#define MAX 10

int main()
{
    int mat[MAX][MAX];
    int row, col, i, j;
    int flag = 1;

    /* Input size of the matrix from user */
    printf("Enter number of row and column of matrix : ");
    scanf("%d %d", &row, &col);

    printf("\nEnter elements of matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    /* Check whether matrix is identity matrix or not */
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i==j && mat[i][j] != 1)
            {
                flag = 0;
            }
            else if(i!=j && mat[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if(flag == 1)
    {
        printf("\nIt is an identity matrix \n");
    }
    else
    {
        printf("\nIt is not an identity matrix \n");
    }

    return 0;
}
