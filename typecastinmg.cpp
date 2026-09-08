#include<stdio.h>
int main()
{
	int num1,num2;
	
	printf("give me the first number");
	scanf("%d",&num1);
	printf("give me the second number");
	scanf("%d",&num2);
	double sum=num1+num2;
	float mean=(float)sum/2;
	printf("the mean is %f",mean);
	return 0;
}
