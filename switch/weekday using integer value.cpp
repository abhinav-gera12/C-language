//weekdays using switch
#include<stdio.h>
main()
{
	int weekday;
	printf("Enter any weekdays from (1-7)= ");
	scanf("%d",&weekday);

		switch(weekday)
		{
			case 1: 
				printf("Today is Sunday");
				break;	
			
			case 2: 
				printf("Today is Monday");
				break;
			
			case 3: 
				printf("Today is Tuesday");
				break;
			
			case 4: 
				printf("Today is Wednesday");
				break;
			
			case 5: 
				printf("Today is Thursday");
				break;
			
			case 6: 
				printf("Today is Friday");
				break;
			
			case 7:
				printf("Today is Satruday");
				break;
			
			default:
				printf("NO CHOICE");
				break;
		}
}

//Output according the value user give from keyboard
