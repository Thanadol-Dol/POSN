#include<stdio.h>
void funfun(int space,char c,int time)
{
	int i;
	for(i=1;i<=space;i++)
	printf("");
	for(i=1;i<=time;i++)
	printf("%c",c);
}
main()
{
	funfun(5,'*',10);
}
