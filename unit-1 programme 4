/*WAP to perform two 2- dimensional matrix Multiplication in advance c short full code.*/

#include <stdio.h>
#define MAX 3

int main()
{
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int i, j, k;

    // Take input from user
    printf("Enter elements of first matrix A of size %dx%d: \n", MAX, MAX);
    for (i = 0; i < MAX; i++)
        for (j = 0; j < MAX; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second matrix B of size %dx%d: \n", MAX, MAX);
    for (i = 0; i < MAX; i++)
        for (j = 0; j < MAX; j++)
            scanf("%d", &B[i][j]);

    // Initialize elements of matrix C to 0
    for (i = 0; i < MAX; i++)
        for (j = 0; j < MAX; j++)
            C[i][j] = 0;

    // Multiply elements of matrix A and B
    // and store in matrix C
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            for (k = 0; k < MAX; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print elements of matrix C
    printf("Product of matrix A and B is: \n");
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
