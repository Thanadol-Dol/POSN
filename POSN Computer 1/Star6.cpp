#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter N : ");scanf("%d",&a);
	for(b=1;b<=a*a;b++){
			printf("*");
			if(b%a==0){
			printf("\n");}
		
	}
}
