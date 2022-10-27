#include<stdio.h>
main()
{
	int nn,i;
	scanf("%d",&nn);
	int n[nn];
	for(i=0;i<nn;i++)
	scanf("%d",&n[i]);
	printf("\n");
	for(i=0;i<nn;i++)
	printf("%d ",n[i]);
}
