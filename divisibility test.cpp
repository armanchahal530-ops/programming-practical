#include<stdio.h>
int main()
{
	int a;
	printf("what is the number: ");
	scanf("%d",&a);
	if(a%5==0 and a%8==0)
	printf("the number is divisible by both 5 and 8");
	else if (a%5==0)
	printf("a is divisible by 5 ");
	else if (a%8==0)
	printf("the number is divisible by 8");
	else 
	printf("the number is not divisible by 5 and 8");
	return 0;
}
