#include<stdio.h>
int main()
{
	int num1, num2,num3,sub,multi,div;
	printf("first number is :\n");
	scanf("%d",&num1);
	printf("second number is: \n");
	scanf("%d",&num2);
	num3=num1+num2;
	printf("number1+number 2 is equal to %d \n",num3);
	sub=num2-num1;
	printf("number 2 subtracted by 1 is %d \n",sub);
	multi=num1*num2;
	printf("number 1 multiplied by number 2 is %d \n",multi);
	div=num2/num1;
	printf("number2 divided by number 1 is %d \n",div);
	
	return 0;
}
