long long factorial(int n){
    long long fact=1;
    for (int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
double power (double n,int num){
    double result=1;
    for (int i=1;i<=num;i++){
        result=result*n;
    }
    return result;
}
#include <stdio.h>
int main (){
    double sum=0,term;
    int n,i,sign=1;
    printf("Enter the value of x:");
    scanf("%d",&n);
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        int exponent= 2*i+1;
        term=power(n,exponent)/factorial(exponent);
        sum=sum+(sign*term);
        sign=-sign;
    }
    printf("Sine of the angle is: %.4f",sum);
}
