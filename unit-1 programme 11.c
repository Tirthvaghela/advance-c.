//Wap to check whether the matrix is lower triangle matrix or not in advance c.

#include <stdio.h>
#define SIZE 3

int main()
{
    int matrix[SIZE][SIZE];
    int i, j, lower_triangle = 1;

    printf("Enter the elements of %dx%d matrix\n", SIZE, SIZE);
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (i < j && matrix[i][j] != 0) {
                lower_triangle = 0;
                break;
            }
        }
    }

    if (lower_triangle)
        printf("The matrix is a lower triangle matrix\n");
    else
        printf("The matrix is not a lower triangle matrix\n");

    return 0;
}
