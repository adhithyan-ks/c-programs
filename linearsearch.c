#include<stdio.h>
int linearSearch(int[],int,int);
int main() {
    int size,i,searchNum,pos=-1,arr[10];
    printf("Enter array size:");
    scanf("%d",&size);
    printf("Enter array elements:\n");
    for(i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter a number to search:");
    scanf("%d",&searchNum);
    if(linearSearch(arr,size,searchNum)==-1) {
        printf("%d was not found in the array.\n",searchNum);
    }
    else {
        printf("%d was found at index %d\n",searchNum,linearSearch(arr,size,searchNum));
    }
    return 0;
}
int linearSearch(int arr[20],int size,int searchNum) {
    int i,pos=-1;
    for(i=0;i<size;i++) {
        if(arr[i]==searchNum) {
            pos=i;
            return(pos);
        }
    }
    return(pos);
}