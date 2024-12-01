#include<stdio.h>
int power(int b,int p);
int main() {
    int b,p;
    printf("Enter Base and Power:");
    scanf("%d %d",&b,&p);
    printf("Power is %d",power(b,p));
}
int power(int b,int p) {
    if(p==1) {
        return b;
    }
    else {
        return(b*power(b,p-1));
    }
}