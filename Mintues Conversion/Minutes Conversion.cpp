// Minutes Conversion
#include<stdio.h>
main()
{
	int minutes = 0;
	double minutes_in_year = 0.0;
	double years = 0.0;
	double days = 0.0;
	double hours = 0.0;
	
		printf("Please enter the number of minutes:-");
		scanf("%d", &minutes);

			minutes_in_year = (60*24*365) ;		
			years = (minutes/minutes_in_year) ; 
			days = (minutes/60) ;
			days = (days/24) ;
			hours = minutes/60;
			printf("%d Minutes is approximately\n Hours=%.2f\t Years=%.2f\t and Days=%.2f\n", minutes, hours, years, days);
}
