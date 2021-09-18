/*This program subtract two float values and displays the results */
#include<stdio.h>
main()
{
	//Declare variables
	float value1, value2, sub;
	
	//Accept values with the help of keyboard and calculate the sub (with scanf)
	printf("Entering 1st values:- ");
	scanf("%f",&value1);
	
	printf("Entering 2nd values:- ");
	scanf("%f",&value2);
	
	sub=value1-value2;
	
	//Displays the result
	printf("The subtraction is =%10.2f",sub);	//The Sub of _ and _ is = _.00
	//10.2 is used for taking upto only 2 decimal values
}
