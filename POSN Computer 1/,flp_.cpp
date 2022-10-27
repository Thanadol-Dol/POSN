/*
TASK: welc
LANG: C
*/
#include<stdio.h>
#include<string.h>
main()
{
	int a;
	int i;
	scanf("%d",&a);
	int b[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=a-1;i>=0;i--)
	{
		printf("%d\n",b[i]);
	}
}
