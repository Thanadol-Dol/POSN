#include<stdio.h>
main()
{
	int n,b,c,d;
	printf("Input n : ");scanf("%d",&n);
	int a[n];
	for(b=0;b<n;b++)
	{
		scanf("%d",&a[b]);
	}
	for(c=n-1;c>=0;c--){
		printf("\n%d : ",a[c]);
		for(d=0;d<a[c];d++){
			printf("*");
		}
	}
}
