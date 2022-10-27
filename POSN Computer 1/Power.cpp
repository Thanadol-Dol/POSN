#include<stdio.h>
int Pows(int,int);
main()
{
	int a,n,c;
	c=Pows(a,n);
	printf("sum=%d",c);
}
int Pows(int a,int n)
{
	int b,i;
	b=1;
	printf("Enter number: ");
	scanf("%d",&a);
	printf("Enter pows: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	b=b*a;
	}
	return b;
}

