#include<stdio.h>
#include<stdbool.h>
main()
{
	int 	a = 15;
	float 	b = 331.79;
	double 	c = 8.49e+11;
	char 	d = 'W';
	_Bool 	e = true;
	
	printf("Integer value a= %d\n",a);					//printing integer value 15
		printf("Float value b= %.3f\n",b);				//printing float value upto 3 decimal point 331.790
			printf("Double value c= %g\n",c);			//printing double 8.49e+011
				printf("Double value c= %e\n",c);			//printing double with different format specifier 8.490000e+011
					printf("Character value d= %c\n",d);	//printing character W
						printf("Bool value e= %d\n",e);		// printing true=1 false =0
}
