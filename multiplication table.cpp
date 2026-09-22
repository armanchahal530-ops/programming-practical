#include<stdio.h>
int main()
{
	int n,next,i;
	printf("which table do you want to print");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		next=n*i;
		printf("%d*%d=%d \n",n,i,next);
	}
	  return 0;
	  
}


