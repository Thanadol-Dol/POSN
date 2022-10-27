#include<stdio.h>
int base(int n);
main()
{	
	printf("%d",base(5));
}
int base(int n)
{	
	int m,s=0,a=1;
	while(n>0)
	{
		m=n%2;
		s=s+(a*m);
		a=a*10;
		n=n/2;
	}
	return s;
}
