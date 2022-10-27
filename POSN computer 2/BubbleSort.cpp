#include<stdio.h>
main(){
	int a[7],i,j,temp;
	for(i=0;i<7;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<7;i++){
		for(j=0;j<6;j++){
			if(a[j]%2==0&&a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<7;i++){
		if(a[i]%2==0){
		printf("%d ",a[i]);
		}
	}
}
