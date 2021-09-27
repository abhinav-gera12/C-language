//to provide simple interest and gross amount 
#include<stdio.h>
main()
{
	float p,r,n,si,gross;
	/* p =	principle value
	   r =	rate of interest
	   n =  number of years
	   si = simple interest
	*/
	printf("Enter the Principle amount =");
	scanf("%f",&p);
	
	printf("Enter the Rate of interest =");
	scanf("%f",&r);
	
	printf("Enter the Number of years =");
	scanf("%f",&n);
	
	si= p*r*n/100;
	gross=si+p;
	
	printf("Simple Interest= %.2f\n",si);
	printf("Gross amount= %.2f",gross);
}
