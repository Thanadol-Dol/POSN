#include<stdio.h>
main()
{
	int i,m,min,num;
	scanf("%d",&i);
	min=i;
	num=0;
	while(i!=0){
		scanf("%d",&i);
		if(i<min){
			min=i;
		}
		if(i%2==0){
			num+=i;
		}
	}
	printf("%d %d",min,num);
}
