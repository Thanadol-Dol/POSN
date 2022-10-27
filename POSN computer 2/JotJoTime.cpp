#include<stdio.h>
main(){
	int sec;
	printf("Input seconds:");scanf("%d",&sec);
	int h=0,min=0;
	if(sec>=3600){
		h+=sec/3600;
		sec=sec%3600;
	}
	if(sec>=60){
		min+=sec/60;
		sec=sec%60;
	}
	printf("Hour:Minute:Second=%d:%d:%d",h,min,sec);
}
