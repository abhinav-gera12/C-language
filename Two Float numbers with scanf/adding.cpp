/*This program add two float values and displays the results */
#include<stdio.h>
main()
{
	//Declare variables
	float value1, value2, sum;
	
	//Accept values with the help of keyboard and calculate the sum (with scanf)
	printf("Entering 1st values:- ");
	scanf("%f",&value1);
	
	printf("Entering 2nd values:- ");
	scanf("%f",&value2);
	
	sum=value1+value2;
	
	//Displays the result
	printf("The addition is =%10.2f",sum);	//The Sum of _.00 and _.00 is = _.00  
	//10.2 is used for taking upto only 2 decimal values
}
