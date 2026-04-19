#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int n,i;
    printf("Enter the number of random integers to generate:");
    scanf("%d",&n);
    srand(time(NULL));
    printf("Random integers are:\n");
    for (i=0;i<n;i++){
        printf("%d\n",rand());
    }
}
