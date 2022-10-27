#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter N : ");scanf("%d",&a);
	for(b=1;b<=a;b++){
		for(c=1;c<=a;c++){
			if(c+b>4){
				printf("2");
			}
			else{
				printf("1");
			}
		}
		
	printf("\n");		
		
	}
}
