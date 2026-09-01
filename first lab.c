#include <stdio.h>
int main()
	{double b; int a;
	 printf("Enter Age: ");
	 scanf("%d", &a);
	 if (a>=18)
	    {printf("Input Basic Salary: ");
	     scanf(" %lf" ,&b);
	     printf("The Gross Salary is %lf",b+0.12*b+0.1*b);
	    }
	 else printf("Person is a Minor and hence cant have salary.");
	 return 0;
	}
