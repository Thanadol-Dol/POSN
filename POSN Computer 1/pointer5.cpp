#include<stdio.h>
main()
{
	int b,c=0,i,j,f;
	printf("Input N : ");scanf("%d",&b);
	int a[b],e[b]={0};
	for(i=0;i<b;i++){
		scanf("%d",&a[i]);
 	for(j=0;j<b;j++){
			if(a[i]==a[j]){
				e[i]++;
			}
		}
	}
	for(i=0;i<b;i++){
		if(i==0){
			f=e[i];
		}
		else if(e[i]>f){
				f=e[i];
			}
		}
	
	for(i=0;i<b;i++){
		if(e[i]==f)
		printf("mode : %d\n",a[i]);
	}
}
