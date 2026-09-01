#include<stdio.h>
#include<math.h>
int main()
{
	float principle,rate,time,CI,amount;
	printf("enter the principle ");
	scanf("%f",&principle);
	printf("what is the interest rate ");
	scanf("%f",&rate);
	printf("enter number of years");
	scanf("%f",&time);
	amount=principle*pow(1+rate/(100.0),time);
	CI=amount-principle;
	printf("the compound interest is: %f",CI);
	return 0;
	}
