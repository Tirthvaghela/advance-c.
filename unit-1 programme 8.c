
/*Wap to find addition of diagonal elements in matrix in advance c.*/

#include<stdio.h>
int main()
{
    int a[100][100],i,j,m,n,sum=0;

    printf("Enter the order of matrix: ");
    scanf("%d %d",&m,&n);

    printf("\nEnter the elements of matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nThe matrix is: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }

    printf("\nThe addition of diagonal elements in the matrix is: %d",sum);

    return 0;
}
