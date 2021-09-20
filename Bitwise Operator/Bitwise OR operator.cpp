#include<stdio.h>
main()
{
	unsigned int a = 60;	//0011 1100
	unsigned int b = 13;	//0000 1101
	int result; 
	result = a | b;			//0011 1101 that is equal to 61
	printf("The Result Is=%d",result);
	
}
