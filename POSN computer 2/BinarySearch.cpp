#include<stdio.h>
int bisearch(int arr[],int n,int t){
	int l=0;
	int r=n-1;
	int m;
	while(l<=r){
		m=(l+r)/2;
		if(arr[m]<t){
			l=m+1;
		}
		else if(arr[m]>t){
			r=m-1;
		}
		else{
			return m;
		}
	}
	return -1;
}
main(){
	int num,n = 15;
	int array[n]={4,5,8,11,14,16,18,21,24,25,32,39,56,61,65};
	scanf("%d",&num);
	printf("%d",bisearch(array,n,num));
}
