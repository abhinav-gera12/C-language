//checking the number is zero, positive or negative
#include<stdio.h>
main()
{
	int a;
	printf("Enter the value of a= ");
	scanf("%d",&a);

	
		if( a<0)
		{
			printf("Number is negative");
		}
		else
			if(a>0)
		{
			printf("Number is positive");
		}
			else
			{
				printf("Number is zero");
			}
}

