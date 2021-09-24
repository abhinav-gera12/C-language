//Arithemtic calculations using switch with demand of the user
#include<stdio.h>
main()
{
	float a,b,c;
	printf("Enter the value of a:-");
	scanf("%f",&a);
	printf("Enter the value of b:-");
	scanf("%f",&b);
	
	int op;
	printf("Enter your choice= ");
	scanf("%d",&op);
	switch(op)
		{
			case 1:
				c=a+b;
				printf("The sum is = %.2f ",c);
				break;
			
			case 2:
				c=a-b;
				printf("The sub is = %.2f ",c);
				break;
				
			case 3:
				c=a*b;
				printf("The mult is = %.2f ",c);
				break;
			
			case 4:
				c=a/b;
				printf("The div is = %.2f ",c);
				break;
				
			default:
				printf("NO CHOICE");
				break;
			
		}	
}
