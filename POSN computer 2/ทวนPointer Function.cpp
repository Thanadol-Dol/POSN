#include<stdio.h>
void swap(int *p,int *q)
{
	int tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;
}
main(){
	int a=10,b=5;
	printf("a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("a=%d,b=%d\n",a,b);
}
