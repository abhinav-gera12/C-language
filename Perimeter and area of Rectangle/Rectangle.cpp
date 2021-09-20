//Calculate the perimeter and area of rectangle
#include<stdio.h>
main()
{
	double length, width, perimeter=0, area=0;
	printf("Enter the Length of the Rectangle:-");
	scanf("%lf",&length);
	printf("Enter the Width of the Rectangle:-");
	scanf("%lf",&width);
	//performing perimeter calculations
		perimeter=2.0*(length+width);
		printf("Perimeter= %.2lf\n",perimeter); 	//displaying output of the perimeter with upto 2 decimal points
	//performing area calculations
			area=length*width;
			printf("Area= %.2lf",area);	//displaying output of the area with upto 2 decimal points
}
