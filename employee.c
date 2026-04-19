#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
struct Employee {
    char name[50];
    char designation[50];
    char gender[10];
    char DOJ[15];
    float salary;
};
int main (){
    struct Employee emp[100];
    int n,i;
    int Male,Female=0;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Enter details of employee %d:\n",i+1);
        printf("Name:");
        scanf("%s",emp[i].name);
        printf("Designation:");
        scanf("%s",emp[i].designation);
        printf("Gender:");
        scanf("%s",emp[i].gender);
        printf("Date of Joining:");
        scanf("%s",emp[i].DOJ);
        printf("Salary:");
        scanf("%f",&emp[i].salary);
    if (strcmp(emp[i].gender,"Male")==0){
        male++; 
    else if (strcmp(emp[i]."Female")==0)
        female++;
}
}
printf("Number of Male Employees: %d\n", male);
printf("Number of Female Employees: %d\n", female);
printf("Total Employees: %d\n", n);
printf("Employees with salary greater than 50000:\n");
for (i=0;i<n;i++){
    if (emp[i].salary>50000){
        printf("%s\n",emp[i].name);
    }
}
printf("Employee with designation GM\n");
for (i=0;i<n;i++){
    if (strcmp(emp[i].designation,"GM")==0){
        printf("%s\n",emp[i].name);
    }
}
