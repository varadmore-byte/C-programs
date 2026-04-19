#include <stdio.h>
void main (){
    int num,i,result;
    printf("Enter a number to print its table:");
    scanf("%d",&num);
    printf("Multiplication Table is\n");
    for (i=1;i<=10;i++){
        result=num*i;
    printf("\n%d",result);
    }
}
