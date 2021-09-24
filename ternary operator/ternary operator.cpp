#include<stdio.h>
main()
{
	int x=5,y=9;																						//if(y>7)
	x=y>7 ? 25 : 50;					//y>7, 9>7 hence the statement is true then x=25				//x=25;
	{																									//else
		printf("value of x %d\n",x);																	//x=50;			
	}
	
			int a=9,b=1;
			a=b>7 ? 25 : 50;   				//b>7, 1>7 hence the statement is false then x=50
			{
				printf("value of a %d",a);
			}
}
