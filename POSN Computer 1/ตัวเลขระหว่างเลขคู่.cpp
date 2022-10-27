#include<stdio.h>
main()
{
	int a,i;
	scanf("%d",&a);
	int b[a];
	for(i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	for(i=1;i<a-1;i++){
		if(b[i-1]%2==0&& b[i+1]%2==0){
			printf("%d ",b[i]);
		}
	}
}
