// Wap to check whether the matrix is symmetric matrix or not in advance c.

#include<stdio.h>
#define MAX 100

int main()
{
    int a[MAX][MAX], n, i, j, flag = 1;

    // n is the order of the matrix
    printf("Enter the order of the Matrix : ");
    scanf("%d", &n);

    // Enter the elements of the Matrix
    printf("\nEnter the elements of Matrix : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check whether the given matrix is symmetric or not
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                flag = 0;
            }
        }
    }

    // Print the result
    if (flag == 1)
        printf("\nThe given matrix is Symmetric Matrix\n");
    else
        printf("\nThe given matrix is Not a Symmetric Matrix\n");

    return 0;
}
