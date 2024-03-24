/*WAP to find the sum of elements of upper triangular*/
#include <stdio.h>

int main (){
    int n,sum=0;
    printf("Enter row or column size: ");
    scanf("%d",&n);
    int mat[n][n];
    printf("Enter the Elements of matrix of order %dx%d",n,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum+=mat[i][j];
        }
    }
    printf("Sum of the elements of matrix is %d\n",sum);
    return 0;
}