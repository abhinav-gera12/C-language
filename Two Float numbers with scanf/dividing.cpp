/*This program divide two float values and displays the results */
#include<stdio.h>
main()
{
	//Declare variables
	float value1, value2, div;
	
	//Accept values with the help of keyboard and calculate the div (with scanf)
	printf("Entering 1st values:- ");
	scanf("%f",&value1);
	
	printf("Entering 2nd values:- ");
	scanf("%f",&value2);
	
	div=value1/value2;
	
	//Displays the result
	printf("The division is =%10.2f",div);	//The divide of _ and _ is = _.00
	//10.2 is used for taking upto only 2 decimal values
}
