/*WAP to find the sum of rows and columns of a matrix.*/
#include <stdio.h>

int main (){
    int m,n;
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
    for (int j=0;j<n;j++){
        int colsum =0;
        for (int i=0;i<m;i++){
            colsum+=mat[i][j];
        }
        printf("sum of %d column is %d\n",j+1,colsum);
    }
    return 0;
}