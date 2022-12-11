/*Wap to perform transport of matrix in advance c.*/



#include <stdio.h>

int main() {
	int row, col;
	printf("Enter the number of rows and columns in the matrix: ");
	scanf("%d %d", &row, &col);
	int matrix[row][col];
	printf("Enter the elements of the matrix: \n");
	for (int i=0; i<row; i++) {
		for (int j=0; j<col; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("The transpose of the matrix is: \n");
	for (int i=0; i<col; i++) {
		for (int j=0; j<row; j++) {
			printf("%d ", matrix[j][i]);
		}
		printf("\n");
	}
	return 0;
}
