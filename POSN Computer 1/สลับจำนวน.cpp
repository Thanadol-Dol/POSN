#include<stdio.h>
int x,y;
void swap(int a,int b);
main()
{	
	x=10;y=20;
	swap(x,y);
	printf("%d",x);
	printf("%d",y);
}
void swap(int a,int b)
{
	y=a;
	x=b;
}
