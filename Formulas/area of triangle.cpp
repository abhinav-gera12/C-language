//to find the area of triangle
#include<stdio.h>
main()
{
	float height,base,area;
	
	printf("Enter the height of the triangle= ");
	scanf("%f",&height);
	
	printf("Enter the base of the triangle= ");
	scanf("%f",&base);
	
	area=base*height/2;
	
	printf("Area= %.2f",area);
}
