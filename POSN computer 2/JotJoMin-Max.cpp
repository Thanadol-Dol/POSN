#include<stdio.h>
#include<algorithm>
using namespace std;
main(){
	int a,i,sum=0;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+a);
	for(i=0;i<a;i++){
		sum+=arr[i];
	}
	int max=sum-arr[0];
	int min=sum-arr[a-1];
	printf("%d %d",min,max);
}
