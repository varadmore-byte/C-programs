#include <stdio.h>
#include <stdlib.h>
int main (){
    int m,n,i,j,A[100][100],B[100][100],C[100][100];
    printf("Enter number of rows and columns:");
    scanf("%d%d",&n,&m);
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("Enter element of A:");
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of Matrix B:\n");
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("Enter element of B:");
            scanf("%d",&B[i][j]);
        }
    }
    printf("\nAddition of Matrix A and B is:\n");
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            C[i][j]=A[i][j]+B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    int f=0,col=0;
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            if (A[i][j]!=B[i][j]){
                f=1;
                break;
            }
        }
        if (f==1){
            break;
        }
    }
    if (f==0){
        printf("\nThe matrices are equal");
    }
    else {
        printf("\nThe matrices are not equal");
    }
     if (m==2){
        int d=A[0][0]*A[1][1]-A[0][1]*A[1][0];
        if (d!=0){
            printf("\nThe matrix is invertible");
        }
        else {
            printf("\nThe matrix is not invertible");
        }
    }
    int s1=0,s2=0,magic=1;
    for (i=0;i<n;i++){
        int r=0,c=0;
        for (j=0;j<n;j++){
            r+=A[i][j];
            c+=A[j][i];
        }
        if (r!=c){
            magic=0;
            break;
        }
    }
    if (magic==1){
        printf("\nThe matrix is a magic square");
    }
    else {
        printf("\nThe matrix is not a magic square");
    }
    return 0;
}
