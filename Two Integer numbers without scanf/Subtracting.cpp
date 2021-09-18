/*This program subtracts two integer values and displays the results */
#include<stdio.h>
main()
{
	//Declare variables
	int value1, value2, sub;
	
	//Assign values and calculate the sum (without scanf)
	value1=20;
	value2=5;
	sub=value1-value2;
	
	//Displays the result
	printf("The subtraction of %d and %d is = %d", value1, value2, sub);	//The subtraction of 20 and 5 is = 15
}
