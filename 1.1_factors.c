#include<stdio.h>
int main() {
    int n,i;
    printf("Enter a number to find factors:");
    scanf("%d",&n);
    printf("Factors of %d are:\n",n);
    for(i=0;i<n;i++) {
        if(n%i==0) {
            printf("%d ",i);
        }
    }
    return 0;
}