#include <math.h>
#include <stdio.h>
int main (){
    int choice,a;
    double b,c;
    printf("1.Square root:");
    printf("2.Square:");
    printf("3.Cube:");
    printf("4.Check for Prime:");
    printf("5.Factorial:");
    printf("6.Prime Factors:");
    printf("Enter your choice:");
    scanf("%d",&choice);
    printf("Enter a Number:");
    scanf("%d",&a);
    switch (choice){
        case 1:{
            int main(){
                c=a;
                b=sqrt(c);
            printf("Square root=%.2f",c);
            }
        }
        break;
        case 2: 
        printf("Square=%d",a*a);
        break;
        case 3:
        printf("Cube=%d",a*a*a);
        break;
        case 4:{
            int i,flag=0;
            for (i=2;i<=a/2;i++){
                if (a%i==0){
                    flag=1;
                    break;
                }            }
            if (flag==0){
                printf("Given number is a Prime Number:");
            }
            else {                
                printf("Given number is not a Prime Number:");
            }
        }
        break;
        case 5:{
            int i,fact=1;
            for (i=1;i<=a;i++){
                fact=fact*i;
            }
            printf("Factorial=%d",fact);
        }
        break;
        case 6:{    
            int i;
            printf("Prime factors are:");
            for (i=2;i<=a;i++){
                while (a%i==0){
                    printf("%d ",i);
                    a=a/i;
                }
            }
        }
        break;
        default:
        printf("Invalid Choice");
    }
}
