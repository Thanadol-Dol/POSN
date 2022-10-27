#include<stdio.h>
main()
{
	int a,i,j;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			if(j<a/2&&i<a/2||i>=a/2&&j>=a/2)
			{
				printf("1");
			}
			else{
				printf("0");
			}
		}
		printf("\n");
	}
}
