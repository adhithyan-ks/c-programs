#include<stdio.h>
int power(int b,int p);
int main() {
    int b,p;
    printf("Enter Base and Power:");
    scanf("%d %d",&b,&p);
    printf("Power is %d",power(b,p));
}