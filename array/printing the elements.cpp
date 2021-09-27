//printing the elements of an arrayS
#include<stdio.h>
main()
{
	int i,a[5],n;
	printf("Enter the value:\n");
	for(i=0; i<5; i++)
	{
		printf("%2d> ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
}
