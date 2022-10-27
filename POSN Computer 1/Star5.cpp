#include<stdio.h>
main()
{
	int x,i,a,max,j;
	printf("Input n : ");scanf("%d",&x);
	int y[x];
	for(i=0;i<x;i++)
	{
		scanf("%d",&y[i]);
		if(i==0){
			max=y[i];
		}
		if(max<y[i]){
			max=y[i];
		}
	}
	for(i=(x-1);i>=0;i--){
		printf("\n%d : ",y[i]);
		for(j=0;j<(max-y[i]);j++){
			printf(" ");
		}
		for(a=0;a<y[i];a++){
			printf("*");
		}
	}
}
