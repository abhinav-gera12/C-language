//checking the greatest integer 
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value of a= ");
	scanf("%d",&a);
	
	printf("Enter the value of b= ");
	scanf("%d",&b);
	
	printf("Enter the value of c= ");
	scanf("%d",&c);
	
		if( a>b && a>c)
		{
			printf("a is greatest");
		}
		else
			if(b>c)
		{
			printf("b is greatest");
		}
			else
			{
				printf("c number is greatest");
			}
}

