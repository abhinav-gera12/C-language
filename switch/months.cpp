//months using switch
#include<stdio.h>
main()
{
	int month;
	printf("Enter any month number from (1-12)= ");
	scanf("%d",&month);

		switch(month)
		{
			case 1: 
				printf("January");
				break;	
			
			case 2: 
				printf("Februrary");
				break;
			
			case 3: 
				printf("March");
				break;
			
			case 4: 
				printf("April");
				break;
			
			case 5: 
				printf("May");
				break;
			
			case 6: 
				printf("June");
				break;
			
			case 7:
				printf("July");
				break;
				
			case 8:
			printf("August");
			break;
				
			case 9:
			printf("September");
			break;
				
			case 10:
			printf("Octoberr");
			break;
				
			case 11:
			printf("November");
			break;
				
			case 12:
			printf("December");
			break;
			
			default:
				printf("NO CHOICE");
				break;
		}
}

//Output according the value user give from keyboard
