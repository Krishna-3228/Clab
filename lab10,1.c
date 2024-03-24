/*WAP to read a matrix and find the sum of the elements of that matrix*/
#include <stdio.h>

int main () {
    int m,n,sum=0;
    printf("Enter row and column size: ");
    scanf("%d%d",&m,&n);
    int mat[m][n];
    printf("Enter the Elements of matrix of order %dx%d",m,n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=mat[i][j];
        }
    }
    printf("Sum of the elements of matrix is %d\n",sum);
    return 0;
}