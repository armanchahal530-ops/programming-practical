#include<stdio.h>
int main()
{
	float a,b;
	printf("what is a:");
	scanf("%f",&a);
	printf("what is b:");
	scanf("%f",&b);
	b=a+b;
	a=b-a;
	b=b-a;
	printf("value of a is:%f",a);
	printf("value of b is:%f",b);
	return 0;
	
}
