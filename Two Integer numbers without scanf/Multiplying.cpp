/*This program multiply two integer values and displays the results */
#include<stdio.h>
main()
{
	//Declare variables
	int value1, value2, mul;
	
	//Assign values and calculate the sum (without scanf)
	value1=10;
	value2=8;
	mul=value1*value2;
	
	//Displays the result
	printf("The multiplication of %d and %d is = %d", value1, value2, mul);	//The multiplication of 10 and 8 is = 80
}
