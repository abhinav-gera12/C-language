//print cube and square of the number
#include<stdio.h>
main()
{
	float number,square,cube;
	
	printf(" Enter the number= ");
	scanf("%f",&number);
	
	square=number*number;
	
	printf(" SQUARE: %.2f\n",square);
	
	cube=number*number*number;
	
	printf(" CUBE: %.2f",cube);
}
