#include<stdio.h>
#include<math.h>
int main()
{ 
	int a;
	printf("what is the number \n");
	scanf("%d",&a);
	if(a%2==0){
		printf("The number is even");
	}
	else{
		printf("The number is odd");
	}
	return 0;
}
