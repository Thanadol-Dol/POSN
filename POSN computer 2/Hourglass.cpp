#include<stdio.h>
main(){
	int num;
	scanf("%d",&num);
	if(num%2==0){
		printf("error");
	}
	else if(num%2!=0){
		int o=0;
		for(int i=num;i>0;i-=2){
			for(int k=0;k<o;k++){
				printf(" ");
			}
			for(int j=i;j>0;j--){
				printf("*");
			}
			printf("\n");
			o++;
		}
		for(int i=3;i<=num;i+=2){
			for(int k=1;k<o-1;k++){
				printf(" ");
			}
			for(int j=0;j<i;j++){
				printf("*");
			}
			printf("\n");
			o--;
		}
	}
}
