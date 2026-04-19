#include <stdio.h>
struct student{
    char name[20];
    int roll;
    float m1,m2,m3;
    float total;
    float percentage;
    char grade;
};
int main(){
    int n,i;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct student s[n];
    for (i=0;i<n;i++){
        printf("Enter the name of student %d:",i+1);
        scanf("%s",s[i].name);
        printf("Enter the roll number of student %d:",i+1);
        scanf("%d",&s[i].roll);
        printf("Enter the marks of student %d in subject 1:",i+1);
        scanf("%f",&s[i].m1);
        printf("Enter the marks of student %d in subject 2:",i+1);
        scanf("%f",&s[i].m2);
        printf("Enter the marks of student %d in subject 3:",i+1);
        scanf("%f",&s[i].m3);
        s[i].total=s[i].m1+s[i].m2+s[i].m3;
        s[i].percentage=(s[i].total/300)*100;
        if (s[i].percentage>=90){
            s[i].grade='A';
        }
        else if (s[i].percentage>=80){
            s[i].grade='B';
        }
        else if (s[i].percentage>=70){
            s[i].grade='C';
        }
        else if (s[i].percentage>=60){
            s[i].grade='D';
        }
        else {
            s[i].grade='F';
        }
    }
    printf("Name\tRoll\tM1\tM2\tM3\tTotal\tPercentage\tGrade\n");
    for (i=0;i<n;i++){
        printf("%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t\t%c\n",s[i].name,s[i].roll,s[i].m1,s[i].m2,s[i].m3,s[i].total,s[i].percentage,s[i].grade);
    }
    return 0;
}  
