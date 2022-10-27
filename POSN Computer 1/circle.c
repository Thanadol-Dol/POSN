/*
TASK: circle
LANG: C
*/
#include<stdio.h>
main()
{
	int a,b;
	float z;
	printf("0.25 Coin : "); scanf("%d",&a);
	printf("0.50 Coin : "); scanf("%d",&b);
	z=(a*0.25)+(b*0.5);
	printf("You have %.2f baht.",z);
}
