#include<stdio.h>

int main() {
    int size,i;
    printf("Enter array size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements:\n");
    for(i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
}