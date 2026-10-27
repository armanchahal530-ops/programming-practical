#include<stdio.h>
int main()
{
	int A[10];
	int sum=0,i=0;
	float average;
	printf("what are the numbers");
	while(i<10)
	{
		scanf("%d",&A[i]);
	i=i+1;
	}
	i=0;
	while(i<10)
	{
		sum=sum+A[i];
		i=i+1;
	}
	average=sum/10;
	printf("sum=%d",sum);
	printf("average=%f",average);
	return 0;
	
}
