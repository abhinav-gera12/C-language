/*This program adds two integer values and displays the results */
#include<stdio.h>
main()
{
	//Declare variables
	int value1, value2, sum;
	
	//Assign values and calculate the sum (without scanf)
	value1=40;
	value2=60;
	sum=value1+value2;
	
	//Displays the result
	printf("The Sum of %d and %d is = %d", value1, value2, sum);	//The Sum of 40 and 60 is = 100
}
