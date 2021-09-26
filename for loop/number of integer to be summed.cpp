//printing the sum of integer number
#include<stdio.h> 
main()
{
	int i, n, sum=0;			//n is the integer suppose 3
	printf("Enter the value of the integer you want sum = ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)			//i starts from 1 and then increment upto 3times because of i<=3
	{
		sum=sum+i;				//sum=0, sum=0+1(i)=1, sum=1+2(i)=3, sum=3+3(i)=6
	}							//1+2+3=6
		printf("The total sum is= %d",sum);			//The total sum is= 6
}
