#include<stdio.h>
#define n 100
main(){
	int array[n];
	for(int i=0;i<n;i++){
		array[i]=rand()%n+1;
		printf("%d ",array[i]);
	}
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
}
