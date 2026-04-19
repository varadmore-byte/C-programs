#include <stdio.h>
int fact_iterative(int n){
    if (n==0){
        return 1;
    }
    int fact=1;
    for (int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int fact_recursive(int n){
    if (n==0){
        return 1;
    }
    return n*fact_recursive(n-1);
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Factorial of %d using iterative method is %d\n",n,fact_iterative(n));
    printf("Factorial of %d using recursive method is %d\n",n,fact_recursive(n));
    return 0;
}
