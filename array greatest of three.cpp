#include<stdio.h>
int main()
{
	int a[10];
	int i=0,min,max;
	printf("what is the number");
	while(i<10)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	
	min=a[0];
	max=a[0];
	i=1;
	while(i<10)
	{   
		if(min>a[i])
		min=a[i];
		
		if(max<a[i])
		max=a[i];
		i++;
		
	}
	printf("min=%d",min);
	printf("max=%d",max);
	return 0;
}
