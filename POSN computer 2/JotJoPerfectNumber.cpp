#include<stdio.h>
main(){
	int min,max,sum=0;
	printf("Input lowest limit of perfect numbers:");
	scanf("%d",&min);
	printf("Input highest search limit of perfect numbers:");
	scanf("%d",&max);
	int temp[max],k=0;
	for(int i=min;i<=max;i++){
		sum=0;
		if(i==1){
			i++;
		}
		for(int j=1;j<i;j++){
			if(i%j==0){
				sum=sum+j;
			}
		}
		if(sum==i){
			temp[k]=sum;
			k++;
		}
	}
	printf("Perfect numbers between %d to %d are:",min,max);
	for(int i=0;i<k;i++){
		printf("%d ",temp[i]);
	}
}
