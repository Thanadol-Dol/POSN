#include<stdio.h>
int sumOfOrder(int);
main()
{
	int n,c;
	c=sumOfOrder(n);
	printf("sum=%d",c);
}
int sumOfOrder(int n)
{
	int b,k,i;
	b=1;
	printf("Enter number: ");
	scanf("%d",&n);
	k=n	;
	for (i=0;i<n;i++)
	{
	b+=k;
	k--;
	}
	return b-1;
}

