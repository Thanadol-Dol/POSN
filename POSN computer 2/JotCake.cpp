#include<stdio.h>

main(){
	int n,c1,c2=0,c3,rc1,rc2,rc3;
	printf("Input N:");
	scanf("%d",&n);
	int cake=n*3;
	if(cake>=25){
		c3=cake/25;
		cake=cake%25;
	}
	if(cake>20){
		c3++;
	}
	else if(cake>14){
		c2+=2;
		cake=0;
	}
	else if(cake>10){
		c1++;
		c2++;
	}
	else if(cake>4){
		c2++;
	}
	else if(cake>0){
		c1++;
	}
	printf("Cake1:%d\n",c1);
	printf("Cake2:%d\n",c2);
	printf("Cake3:%d\n",c3);
}
