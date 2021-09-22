//sizeof() operator to see how much byte memory used to store these data types
//it would be different for other computer according to the system intall memory 
#include<stdio.h>
main()
{
	printf("Data type char size = %zd Byte\n", sizeof(char));						//1 Byte
	printf("Data type short size = %zd Byte\n", sizeof(short));						//2 Byte
	printf("Data type int size = %zd Byte\n", sizeof(int));							//4 Byte
	printf("Data type long size = %zd Byte\n", sizeof(long));						//4 Byte
	printf("Data type long long size = %zd Byte\n", sizeof(long long));				//8 Byte
	printf("Data type float size = %zd Byte\n", sizeof(float));						//4 Byte
	printf("Data type double size = %zd Byte\n", sizeof(double));					//8	Byte
	printf("Data type long double size = %zd Byte\n", sizeof(long double));			//16 Byte
}
