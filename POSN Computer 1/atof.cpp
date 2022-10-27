#include<stdio.h>
#include<stdlib.h>
main()
{
	char number[15]="25.678988";
	float fnum;
	
	fnum=atof(number);
	fnum++;
	printf("%f",fnum);
}
