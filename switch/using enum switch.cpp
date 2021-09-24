//enum type SWITCH
#include<stdio.h>
main()
{
	enum weekdays 
	{
	Monday, Tuesday, Wednesday, Thursday, Friday
	};
	enum weekdays today = Wednesday;
	
		switch(today)
		{
			
			case Monday: 
				printf("Today is Monday");
				break;
			
			case Tuesday: 
				printf("Today is Tuesday");
				break;
			
			case Wednesday: 
				printf("Today is Wednesday");
				break;
			
			case Thursday: 
				printf("Today is Thursday");
				break;
			
			case Friday: 
				printf("Today is Friday");
				break;
			
			default:
				printf("NO CHOICE");
				break;
		}
}

//OUTPUT = Today is Wedenesday
