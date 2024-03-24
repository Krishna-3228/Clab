/*WAP to find out the transpose of a given matrix*/
#include <stdio.h>

int main () {
    int m,n;
    printf("Enter row and column size:\n");
    scanf("%d%d",&m,&n);
    int mat[m][n];
    printf("Enter the Elements of matrix of order %dx%d\n",m,n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Original Matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the Matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",mat[j][i]);
        }
        printf("\n");
    }
    return 0;
}