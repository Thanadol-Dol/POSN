#include<stdio.h>
int main(){
	int n,m,i,index;
	scanf("%d %d",&n,&m);
	int arr[n+1];
	for(i=1;i<=n;i++)
	scanf("%d",&arr[i]);
	for(i=1;i<=n;i++){
		if(arr[i]==m){
			index=i;
		}
	}
	printf("%d",index);
	return 0;
}
