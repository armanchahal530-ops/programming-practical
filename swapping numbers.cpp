#include<stdio.h>
int main()
{
	float a,b,temp;
		printf("enter a: ");
		scanf("%f",&a);
		printf("enter b: ");
		scanf("%f",&b);
		temp=a;
		a=b;
		b=temp;
		printf("value of a is :%f",a);
		printf("value of b is : %f",b);
		return 0 ;
}
