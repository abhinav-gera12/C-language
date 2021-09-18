/*This program divide two integer values and displays the results */
#include<stdio.h>
main()
{
	//Declare variables
	int value1, value2, div;
	
	//Assign values and calculate the sum (without scanf)
	value1=30;
	value2=15;
	div=value1/value2;
	
	//Displays the result
	printf("The divison of %d and %d is = %d", value1, value2, div);	//The divison of 30 and 15 is = 2
}
