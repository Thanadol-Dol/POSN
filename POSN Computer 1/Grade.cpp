/*
TASK: welc
LANG: C
*/
#include<stdio.h>
main(){
	int a,b;
	scanf("%d",&a);
	if(a>=0&&a<=100){
		if(a>=80){
			printf("A");
		}
		else if(a>=70){
			printf("B");
		}
		else if(a>=60){
			printf("C");
		}
		else if(a>=50){
			printf("D");
		}
		else {
			printf("F");
		}
	}
	else{
		printf("Error!!");
	}
}
