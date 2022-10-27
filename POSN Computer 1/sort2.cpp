#include<stdio.h>
main()
{
	int nn,n[5],i,j;
	scanf("%d",&nn);
	for(i=0;i<nn;i++) scanf("%d",&n[i]);
	printf("\n");
	for(i=0;i<nn;i++) printf("%d ",n[i]);
	printf("\n============\n");
	for(i=0;i<nn;i++){
		for(j=0;j<=i;j++) printf("%d ",n[j]);
		printf("\n");
	}
}
