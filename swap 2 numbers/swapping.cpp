//swap the values
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value of first number= ");
	scanf("%d",&a);
		
	printf("Enter the value of second number= ");
	scanf("%d",&b);
	
	printf("Before swappping\t a=%d\t b=%d\n",a,b);

c=a;
a=b;
b=c;

	
	printf("After swapping\t\t a=%d\t b=%d",a,b);
}
