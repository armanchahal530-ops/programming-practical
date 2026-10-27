#include<stdio.h>
int main()
{
	int a[10];
	int i=0,count=0,key;
	printf("what are the numbers");
	while(i<10)
	{
		scanf("%d",&a[i]);
		i++;
	}
	i=0;
	key=20;
	while(i<10)
	{
		if(key==a[i])
		{
			printf("successfull at %d \n ",i);
			count++;
		}
		i++;
	}
	return 0;
}
