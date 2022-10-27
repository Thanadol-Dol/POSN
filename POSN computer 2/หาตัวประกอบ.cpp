#include<stdio.h>
main(){
	int a,temp[100],count=0;
	scanf("%d",&a);
	for(int i=2;i<=a;i++){
		while(a%i==0){
			a=a/i;
			temp[count]=i;
			count++;
		}
	}
	for(int i=0;i<count-1;i++){
		printf("%d*",temp[i]);
	}
	printf("%d",temp[count-1]);
}
