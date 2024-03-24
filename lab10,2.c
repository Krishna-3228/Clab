/*WAP to add two matrices and display it.*/
#include <stdio.h>

int main () {
    int m,n,p,q;
    printf("Enter row and column size of matrix 1");
    scanf("%d%d",&m,&n);
    printf("\nEnter row and column size of matrix 2");
    scanf("%d%d",&p,&q);
    int mat1[m][n],mat2[p][q];
    printf("Enter the elements of matrix1");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements of matrix2");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Sum of matrix1 and matrix2:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",mat1[i][j]+mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}