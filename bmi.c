#include <stdio.h>
int main()
{
	float h,w,bmi;
	printf("enter the height:");
	scanf("%f",&h);
	printf("enter the weight:");
	scanf("%f",&w);
	bmi=w/(h*h);
	printf("body mass index =%f",bmi);
	return 0;
}
