#include<stdio.h>
#include<math.h>
int factorial(int);
float uSin(float);
int main() {
    float a,rad;
    printf("Enter an angle:");
    scanf("%f",&a);
    rad=a*3.14/180;
    printf("Sin(%f)=%f\n",a,sin(rad));
    printf("uSin(%f)=%f\n",a,uSin(rad));
    return 0;
}
float uSin(float x) {
    float a=0,term;
    int sign=1,i=1;
    do {
        term=pow(x,i)/factorial(i);
        a=a+term*sign;
        sign=sign*-1;
        i=i+2;
    } while(fabs(term >= 0.00001));
    return(a);
}
int factorial(int n) {
    if(n==1) {
        return(1);
    }
    else {
        return(n*factorial(n-1));
    }
}