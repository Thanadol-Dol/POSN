/*
TASK: circle
LANG: C
*/
#include<stdio.h>
main()
{
	int a,b,c,d,e,f;
	float z;
	printf("0.25 Coin : "); scanf("%d",&a);
	printf("0.50 Coin : "); scanf("%d",&b);
	z=(a*0.25)+(b*0.5);
	printf("You have %.2f baht.",z);
	printf("\n10 coin = %d",d=z/10);
	printf("\n5 coin = %d",e=(z-(d*10))/5);
	printf("\n1 coin = %d",f=(z-(e*5)-(d*10))/1);
}
