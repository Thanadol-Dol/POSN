#include<stdio.h>
int subtract(int x,int y);
main()
{
	int z;
	z=subtract(50,20);
	printf("%d",z);
}
int subtract(int x,int y)
{
	int ans;
	ans = x-y;
	return ans;
}
