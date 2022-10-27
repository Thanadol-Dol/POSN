#include<stdio.h>
main(){
	int a[5],b[5],c[5],i,j;
	printf("First Group: ");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		if(i!=0&&a[i]<=a[i-1]){
			printf("Error");
			i--;
		}
	}
	printf("Second Group: ");
	for(i=0;i<5;i++){
		scanf("%d",&b[i]);
		if(i!=0&&b[i]<=b[i-1]){
			printf("Error");
			i--;
		}
	}
	for(i=0;i<5;i++){
		if(a[i]>b[i]){
			c[i]=a[i];
		}
		else if(b[i]==a[i]){
			c[i]=a[i];
		}
		else if(b[i]>a[i]){
			c[i]=b[i];
		}
	}
	for(i=0;i<5;i++){
		printf("%d ",c[i]);
	}
}
