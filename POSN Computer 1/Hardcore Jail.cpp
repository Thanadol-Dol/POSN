#include<stdio.h>
main(){
	int n,m,aa=0,j=0,i;
	printf("n = ");
	scanf("%d",&n);
	printf("m = ");
	scanf("%d",&m);
	int a[n+1]= {0};
	for(i=1;j<n;i++)
	{
		if(i==n+1)
			i=1;
		if(a[i]==1)
			continue;
		else 
			aa++;
		if(aa==m)
		{
			printf("%d ",i);
			a[i]=1;
			aa=0;
			j++;
		}			
	}
}
