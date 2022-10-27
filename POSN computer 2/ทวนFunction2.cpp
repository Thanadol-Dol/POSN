#include<stdio.h>
double getAverage(int arr[],int size)
{
	int i;
	double avg;
	double sum=0;
	for(i=0;i<size;++i){
		sum+=arr[i];
	}
	avg=sum/size;
	return avg;
}
main(){
	int a[5]={1,2,3,4,5},i;
	double avg;
	avg=(a,5);
	printf("%f",avg);
}
