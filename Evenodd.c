#include <stdio.h>
int main (){
    int n,i;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int arr[n],even[n],odd[n];
    int e,o=0;
    printf("Enter the elements of the array:");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        if (arr[i]%2!=0){
            odd[o]=arr[i];
            o++;
        }else {
            even[e]=arr[i];
            e++;
        
    }
         
}
printf("Even numbers are:");
for (i=0;i<e;i++){
    printf("%d ",even[i]);
}
printf("\nOdd numbers are:");
for (i=0;i<o;i++){
    printf("%d ",odd[i]);
}
}
