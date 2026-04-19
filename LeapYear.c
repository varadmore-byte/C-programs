#include <stdio.h>
void main () {
int year;
printf("Enter Year");
scanf("%d",&year);
if (year%400) {
  printf("Given Year is a Leap Year");}
else if (year%4==0 & year%100!=0){
  printf("Given Year is a Leap Year:");}
else {
  printf("Given Year is not a Leap Year");}
}
