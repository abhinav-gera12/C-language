#include<stdio.h>
main()
{
	unsigned int a = 60;	//0011 1100
	unsigned int b = 13;	//0000 1101
	int result; 
	result = a & b;			//0000 1100 that is equal to 12
	printf("The Result Is=%d",result);
	
}
