/*
TASK: CompareNumbers
LANG: C
*/
#include<stdio.h>
main()
{
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	if(x>y)
	{
		printf("%d",x);
	}
	else if(x<y)
	{
		printf("%d",y);
	}
	else if(x==y)
	{
		printf("=");
	}
}
