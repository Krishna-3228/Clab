/*WAP to multiply two matrices and display it.*/
#include <stdio.h>

int main () {
    int m,n,p,q;
    printf("Enter row and column size of matrix 1");
    scanf("%d%d",&m,&n);
    printf("\nEnter row and column size of matrix 2");
    scanf("%d%d",&p,&q);
    int mat1[m][n],mat2[p][q];
    printf("Enter the elements of matrix1:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements of matrix2:");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Matrix 1:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2:\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    printf("Product of Matrix1 and Matirx2:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            int ele=0;
            for(int k=0;k<n;k++){
                ele+=mat1[i][k]*mat2[k][j];
            }
            printf("%d\t",ele);
        }
        printf("\n");
    }
    return 0;
}