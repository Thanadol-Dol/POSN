#include<stdio.h>
int inputint(void);
main()
{
	int x,y,z;
	x=inputint();
	y=inputint();
	z=x+y;
	printf("z=%d",z);
}
int inputint(void){
	int a;
	printf("Enter num :");
	scanf("%d",&a);
	return a;
}
