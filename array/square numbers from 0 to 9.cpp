//square numbers of the integers from 1 to 9
#include<stdio.h>
main()
{
	int array[10]={0,1,4,9,16};
	int i;
	for(i=5;i<=10;i++)
	{
		array[i]=i*i;
	}
	for(i=0;i<10;i++)
	{
		printf("array[%d]=%d\n",i,array[i]);
	}
}

/*OUTPUT
array[0]=0
array[1]=1
array[2]=4
array[3]=9
array[4]=16
array[5]=25
array[6]=36
array[7]=49
array[8]=64
array[9]=81
*/
