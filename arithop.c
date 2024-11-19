#include<stdio.h>
int main()
{
	int option,a,b,c;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Select your option:\n1.a+b\n2.a-b\n3.a*b\n4.a/b\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			printf("a+b=%d\n",a+b);
			break;
		case 2:
			printf("a-b=%d\n",a-b);
			break;
		case 3:
			printf("a*b=%d\n",a*b);
			break;
		case 4:
			printf("a/b=%d\n",a/b);
			break;
		default:
			printf("Invalid option\n");
			break;
	}
}
