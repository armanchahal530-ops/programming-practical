#include<stdio.h>
int main()
{
	int n,i=2;
	int isprime=1;
	printf("what is the number");
	scanf("%d",&n);
	if (n<=1){
		isprime=0;
		
	}
	else{
		while(i<=n/2){
			if(n%i==0){
				isprime=0;
				break;
			}
		}
	}
	if(isprime)
	printf("it is a prime number");
	
	else 
	printf("it is not a prime number");
	return 0;
}
