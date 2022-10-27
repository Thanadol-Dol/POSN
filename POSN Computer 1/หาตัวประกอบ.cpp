#include<stdio.h>
main(){
	int a,i;
	scanf("%d",&a);
	for(i=2;i<=a;){
		if(a%i==0){
			printf("%d ",i);
			a/=i;
		}else{
			i++;
		}
	}
}
