#include<stdio.h>
#define n 1000
main(){
	int array[n];
	int i;
	for(i=0;i<n;i++){
		array[i]=rand()%n+1;
		/*printf("%d ",array[i]);*/
	}
	int j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	/*for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}*/
}
