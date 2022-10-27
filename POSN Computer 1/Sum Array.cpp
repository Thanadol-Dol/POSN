#include<stdio.h>
main()
{
	int a,b,c,d,sum=0;
	printf("Input n : ");scanf("%d",&a);
	printf("Input m : ");scanf("%d",&b);
	printf("Input A : \n");
	int e[a][b];
	for(c=0;c<a;c++){
		for(d=0;d<b;d++){
			scanf("%d",&e[c][d]);
		}
	}
	printf("A = \n");
	for(c=0;c<a;c++){
		for(d=0;d<b;d++){
			printf("%d ",e[c][d]);
			sum+=e[c][d];
		}
		printf("= %d\n",sum);
			sum=0;
	}
	for(c=0;c<b;c++){
	for(d=0;d<a;d++){

			sum+=e[d][c];
		}
		printf("%d ",sum);
		sum=0;
	}
}
