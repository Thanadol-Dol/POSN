#include<stdio.h>
int Factorial(int);
main()
{
	int n,c;
	c=Factorial(n);
	printf("sum=%d",c);
}
int Factorial(int n)
{
	int b,k,i;
	b=1;
	printf("Enter number: ");
	scanf("%d",&n);
	k=n	;
	for (i=0;i<n;i++)
	{
	b*=k;
	k--;
	}
	return b;
}

