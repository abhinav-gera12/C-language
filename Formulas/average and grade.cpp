//calculate the average marks as well as grade
#include<stdio.h>
main()
{
	float chemistry,math,english,grade,average;
	printf("Enter the Marks of Chemistry: ");
	scanf("%f",&chemistry);
	
	printf("Enter the Marks of Math: ");
	scanf("%f",&math);
	
	printf("Enter the Marks of English: ");
	scanf("%f",&english);
	
	average = (chemistry+math+english) / 3;
	
	printf("Average= %.2f\n",average);
	
	if(average >80)
		{
			printf("Grade: A");
		}
		
	else if (average>70)
		{
			printf("\nGrade: B");
		}
		
	else if (average>60)
		{
			printf("\nGrade: C");
		}
		
	else if (average>50)
		{
			printf("\nGrade: D");
		}
		
	else 
		{
			printf("\nFail");
		}
}
