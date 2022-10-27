#include<stdio.h>
int backnum(int x);
main()
{	
	int n=1234;
	int b;
	b=backnum(n);
	printf("%d",b);
}
int backnum(int x)
{	
	int k=0;
	int m;
	while(x>0){
		m=x%10;
		k=k*10+m;
		x=x/10;
		
	}
	return k;
}
