#include<stdio.h>
void swap(int p,int q)
{
	int tmp;
	tmp=p;p=q;q=tmp;
	printf("a=%d,b=%d\n",p,q);
}
main(){
	int a=10,b=5;
	printf("a=%d,b=%d\n",a,b);
	swap(a,b);
}
