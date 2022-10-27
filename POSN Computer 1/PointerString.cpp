#include<stdio.h>
main()
{
	char str[]={'a','b','c','d','\0'};
	char*strPtr;
	char day[]="Monday";
	char *monthPtr="January";
	
	strPtr=str;
	printf("%s\n",str);
	printf("%s\n",strPtr);
	printf("%c\n",*strPtr);
	printf("%d\n",*strPtr);
	printf("%s\n",monthPtr);
	printf("%s\n",day);
}
