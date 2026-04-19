#include <stdio.h>
#include <math.h>
void main (){
    int bin,dec=0,rem,i=0;
    printf("Enter a binary number:");
    scanf("%d",&bin);
    while (bin!=0){
        rem=bin%10;
        dec=dec+rem*(1<<i);
        bin=bin/10;
        i++;
    }
    printf("Decimal equivalent: %d", dec);
}   
