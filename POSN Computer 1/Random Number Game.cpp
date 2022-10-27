#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int r,ans,a,min=1,max=100;
	srand(unsigned(time(NULL)));
	r=(rand()%100)+1;
	for(a=0;a<7;a++){
		printf("Input number between[%d-%d]\n",min,max);
		scanf("%d",&ans);
		if(ans==r)
		{
	printf("Yes\n+++You Win+++");break;
	}
	else if(ans!=r){
		printf("No\n");
		if(ans<r){
		min=ans+1;}
	else if(ans>r){
		max=ans-1;}
	}	
}
	if(a>5)
	printf("++Game Over++");
}
