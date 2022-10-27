#include<stdio.h>

main(){
	int a,b,i,j,count=0;
	scanf("%d %d",&a,&b);
	int arrj[a],arrd[b],ans[a];
	for(i=0;i<a;i++)
	scanf("%d",&arrj[i]);
	for(i=0;i<b;i++)
	scanf("%d",&arrd[i]);
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(i==j){
				if(arrj[i]==arrd[j]){
					ans[count]=arrj[i];
					count++;
				}
			}
		}
	}
	if(count==a){
		printf("congratulation!!");
	}
	else if(count==0){
		printf("Too Bad");
	}
	else{
		for(i=0;i<count;i++){
			printf("%d ",ans[i]);
		}
	}
}
