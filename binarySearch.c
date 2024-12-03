#include<stdio.h>
int binarySearch(int[],int,int,int);
int main() {
    int i,size,arr[10],searchNum,result;
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("Enter array elements:\n");
    for(i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter Number to Search:");
    scanf("%d",&searchNum);
    result=binarySearch(arr,0,size-1,searchNum);
    if(result==-1) {
        printf("Number was not found");
    }
    else {
        printf("Number found at index %d",result);
    }
}
int binarySearch(int arr[10],int lower,int upper,int searchNum) {
    int mid;
    while(lower<=upper) {
        mid=(lower+upper)/2;
        if(arr[mid]==searchNum) {
            return(mid);
        }
        if(searchNum>arr[mid]) {
            lower=mid+1;
        }
        else {
            upper=mid-1;
        }
    }
    return -1;
}