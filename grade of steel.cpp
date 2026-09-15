#include<stdio.h>
int main(){
	float hardness, carbon,tensile,a,b,c;
	printf("what is the hardness of steel: ");
	scanf("%f",&hardness);
	printf("what is the carbon content of steel");
	scanf("%f",&carbon);
	printf("what is the tensile strength of the material");
	scanf("%f",&tensile);
	a=50;
	b=0.7;
	c=5600;
	if (hardness>a and b<carbon and c>tensile)
	printf("it is a grade 10 steel");
	else if (hardness>a and b<carbon)
	printf("it is a grade 9 steel");
	else if (b<carbon and c>tensile)
	printf("it is a grade 8 steel");
	else if(hardness>a and c>tensile)
	printf("it is a grade 7 steel");
	else if (hardness>a or b<carbon or c>tensile)
	printf("it is a grade 6 steel");
	else
	printf("it is a grae 5 steel");
		}
