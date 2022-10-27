#include<stdio.h>
#include<stdlib.h>
main()
{
	int  n,number=0,x,n2;
	scanf("%d",&n);
	n2=n;
	while(n>=1){
		n/=2;
		number++;
	}
	int y[number];
	for(int i=1;i<=number;i++){
		y[number-1]=n2%2;
		n2=n2/2;
	}
	for(int k=0;k<=number;k++){
		printf("%d",y[k]);
	}
}
