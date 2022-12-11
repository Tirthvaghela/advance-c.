/*Wap to read and print 2-Dimensional matrix in advance c.*/

#include<stdio.h>

//Declaring the matrix
int matrix[3][3] = {{1,2,3},
					{4,5,6},
					{7,8,9}};

//Function to print the matrix
void printMatrix(int matrix[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}

//Main function
int main()
{
	//Print the matrix
    printMatrix(matrix);
    return 0;
}
