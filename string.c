#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
    char str[100],str2[100],rev[100];
    int i,len,flag=0;
    printf("Enter a string:");
    scanf("%s",str);
    printf("Enter another string:");
    scanf("%s",str2);
    if (strcmp(str,str2)==0)
        printf("The strings are equal:");
    }
    else {
        printf("The strings are not equal:");
    }
    fgets(str, sizeof(str), stdin);
    len=strlen(str);
    printf("Length of the string is:%d\n",len-1);
    for (i=0;i<len;i++){
        rev[i]=str[len-i-1];
    }
    rev[i]='\0';
    printf("Reverse of the string is:%s\n",rev);
    for (i=0;i<len;i++){
        if (str[i]!=rev[i]){
            flag=1;
            break;
        }
    }
    if (flag==0){
        printf("The string is a palindrome:");
    }
    else {
        printf("The string is not a palindrome:");
    }
}
