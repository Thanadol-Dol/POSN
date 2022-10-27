#include<stdio.h>
int Recer1 (int n);
main()
{
	int a=1;
	printf("%d",Recer1(a));
}

int Recer1 (int n){
	if(n==0)
		return(5);
	else
		return(Recer1(n-1)*2);
}
