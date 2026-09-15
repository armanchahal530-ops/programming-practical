#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,n;
	char op;
	printf("what is the first number: ");
	scanf("%d",&a);
	printf("what is the second number: ");
	scanf("%d",&b);
	printf("what you want to do: ");
	scanf("%c",&op);
	switch(op)
	case '+': n= a+b;
	break;
	case'-': n=a-b;
	break;
	case'/': n=a/b;
	break;
	case'*'; n=a*b;
	break;
	case'%';n=a%b;
	break;
	printf("%d",n);
}
