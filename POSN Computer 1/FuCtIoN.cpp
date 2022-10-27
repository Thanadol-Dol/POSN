#include<stdio.h>
int inputint(void);
int sum(int x,int y);
main(){
	int a,b,c;
	a=inputint();
	b=inputint();
	c=sum(a,b);
	printf("sum=%d",c);
}
int inputint(void)
{
	int a;
	printf("Enter num :");
	scanf("%d",&a);
	return a;
}
int sum(int x,int y)
{
	return x+y;
}
