#include<stdio.h>
main()
{
	int nn,n[5],i,j,min_position,temp;
	scanf("%d",&nn);
	n[nn];
	for(i=0;i<nn;i++)
		scanf("%d",&n[i]);
	printf("\n");
	for(i=0;i<nn;i++)
		printf("%d ",n[i]);
	printf("\n===========\n");
	for(i=0;i<nn;i++)
	{
		for(j=0;j<=i;j++)
			printf("%d ",n[j]);
		printf("\n");	
	}
	for(i=0;i<nn;i++)
	{
		min_position=i;
		for(j=i+1;j<nn;j++)
		{
			if(n[j]<n[min_position])
			min_position=j;
		}
	temp=n[min_position];
	n[min_position]=n[i];
	n[i]=temp;
	}
	printf("\n=============\n");
	for(i=0;i<nn;i++)
		printf("%d ",n[i]);
}
