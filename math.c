#include <stdio.h>
int main () {
    int choice;
    float num1,num2;
    printf("Menu:\n");
    printf("1.Addition\n");
    printf("2.Subtraction:\n");
    printf("3.Multiplication:\n");
    printf("4.Division:\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    printf("Enter two numbers:");
    scanf("%f%f",&num1,&num2);
    switch (choice){
        case 1:
        printf("Addtion=%.2f",num1+num2);
        break;
        case 2:
        printf("Subtraction=%.2f",num1-num2);
        break;
        case 3:
        printf("Multiplication=%.2f",num1*num2);
        break;
        case 4:
        printf("Division=%.2f",num1/num2);
        break;
        default:
        printf("Invalid Choice");
    }
}
