#include <stdio.h>
#include <string.h>
int main (){    
    char str[100],str1[100],temp[100];
    int choice;
    printf("Enter a string:");
    scanf("%s",str);
    printf("Enter another string:");
    scanf("%s",str1);
    printf("Menu:\n");
    printf("1.Length of a string:\n");
    printf("2.Copy the string:\n");
    printf("3.Concatenate the strings:\n");
    printf("4.Compare the strings:\n");
    printf("5.Reverse the string:\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch (choice){
        case 1:
        printf("Length of the string is:%1ld",strlen(str));
        break;
        case 2:
        strcpy(temp,str);
        printf("Copied string is:%s",temp);
        break;
        case 3:
        strcat(str,str1);
        printf("Concatenated string is:%s",str);
        break;
        case 4:
        if (strcmp(str,str1)==0)
            printf("The strings are equal:");
        else {
            printf("The strings are not equal:");
        }
        break;
        case 5:{
            int i,len;
            char rev[100];
            len=strlen(str);
            for (i=0;i<len;i++){
                rev[i]=str[len-i-1];
            }
            rev[i]='\0';
            printf("Reverse of the string is:%s",rev);
            }
            break;
        default:
        printf("Invalid Choice");
    }
}
