#include<stdio.h>
#include<stdlib.h>
main()
{
	int num=5;
	char str[25];
	
	itoa(num,str,2);
	printf("%s",str);
}
