#include<stdio.h>
main()
{
	int a,i,j;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			if(i==0||i==a-1||j==a-1||j==0){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
