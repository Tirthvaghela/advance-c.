/*Wap to perform two 2-dimensional matrix addition in advance c short full code.*/

#include<stdio.h>
#define M 3
#define N 3

int main()
{
    int a[M][N], b[M][N], c[M][N], i, j;

    // Taking input for matrix A
    printf("Enter elements of matrix A: \n");
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Taking input for matrix B
    printf("\nEnter elements of matrix B: \n");
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Adding matrix A and B
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Displaying result
    printf("\nSum of matrix A and B is: \n");
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
