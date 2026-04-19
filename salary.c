#include <stdio.h>
int main(){
    int bs;
    float hra,ta,pt,gs,ns;
    printf("Enter base salary:");
    scanf("%d",&bs);
    hra=0.1*bs;
    ta=0.05*bs;
    gs=bs+hra+ta;
    pt=0.02*gs;
    ns=gs-pt;
    printf("Base salary:%d\nHRA:%.1f\nTA:%.1f\nPT:%.1f\nGROSS SALARY:%.1f\nNET SALARY:%.1f\n",bs,hra,ta,pt,gs,ns);
}
