#include<stdio.h>
int main()
{
	int number,tens,ones,hundreds,thousands,tenthousands,inverted;
	printf("give me a number:");
	scanf("%d",&number);
	ones=number%10;
	tens=number%100;
	hundreds=number%1000;
	thousands=number%10000;
	tenthousands=number%100000;
	inverted=ones*10000+tens*1000+hundreds*100+thousands*10+tenthousands;
	printf("interted of the given number is: %d",inverted);
	return 0;
	
}
