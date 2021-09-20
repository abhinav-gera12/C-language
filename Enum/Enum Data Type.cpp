//Enum Data Type
#include<stdio.h>
main()
{
	enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO=10 , EBAY, MICROSOFT};
	
	enum Company xerox = XEROX;
	enum Company google = GOOGLE;
	enum Company ebay = EBAY;
	
		printf("The value of Xerox:-%d\n", xerox);		//answer is 2
		printf("The value of Google:-%d\n", google);	//answer is 0
		printf("The value of Ebay:-%d\n", ebay);		//answer is 11
}
