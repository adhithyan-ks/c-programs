#include<stdio.h>
void readArray(int[],int);
void printArray(int[],int);
void selectionSort(int[],int);
void swap(int*, int*);
int main() {
    int a[10],size;
    printf("Enter array size:");
    scanf("%d",&size);
    printf("Enter array elements:\n");
    readArray(a,size);
    selectionSort(a,size);
    printf("Sorted array:\n");
    printArray(a,size);
    return 0;
}

void readArray(int a[], int n) {
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
}

void printArray(int a[], int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
}

void selectionSort(int a[], int n) {
    int i,j,minIndex;
    for(i=0;i<n-1;i++) {
        minIndex=i;
        for(j=i+1;j<n;j++) {
            if(a[j]<a[minIndex]) {
                minIndex=j;
            }
        }
        swap(&a[minIndex],&a[i]);
    }
}

void swap(int*a,int*b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}