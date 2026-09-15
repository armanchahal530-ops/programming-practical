#include<stdio.h>
int main()
{
	int a , b ,c;
	printf("what is the value of a : ");
	scanf("%d",&a);
	printf("what is the value of b : ");
	scanf("%d",&b);
	printf("what is the value of c : ");
	scanf("%d",&c);
	if (a>b && a>c)
	printf("a is the greatest number");
    if (b>c && b>a)	
    printf("b is greatest number");
    else 
    printf("c is the greatest number");
    return 0 ;
}
