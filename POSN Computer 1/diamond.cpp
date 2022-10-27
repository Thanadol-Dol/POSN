#include<stdio.h>
main()
{
	int a,i,j,b;
	scanf("%d",&a);
	b=a;
	for(i=1;i<=a;i++){
		for(j=1;j<=b-1;j++){
			printf(" ");
		}
		b--;
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=a;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(j=1;j<=2*(a-i)-1;j++){
			printf("*");
		}
		printf("\n");
	}
}
