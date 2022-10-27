#include<stdio.h>
main()
{
	int num,data[10],i,j,temp;
	scanf("%d",&num);
	data[num];
	for(i=0;i<num;i++)
		scanf("%d",&data[i]);
	printf("\n");
	for(i=0;i<num;i++)
		printf("%d ",data[i]);
	printf("\n================\n");
	for(i=0;i<num;i++)
	{
		for(j=0;j<=i;j++)
			printf("%d ",data[j]);
			printf("\n");
		}
	for(j=0;j<num;j++)
	{
		for(i=0;i<num-j-1;i++)
		{
			if(data[i+1]<data[i])
			{
				temp=data[i+1];
				data[i+1]=data[i];
				data[i]=temp;
			}
		}
		}
	printf("\n============\n");	
	for(i=0;i<num;i++)
		printf("%d ",data[i]);
}
