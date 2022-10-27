#include<stdio.h>
main(){
	int a,b,i,j,k,sum=0;
	printf("Size of matrix: ");scanf("%d %d",&a,&b);
	int c[a][b];
	int d[b][a];
	int e[a][a];
	
	printf("Member of first matrix: ");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&c[i][j]);
		}
	}
	
	printf("Member of second matrix: ");
	for(j=0;j<b;j++){
		for(i=0;i<a;i++){
			scanf("%d",&d[j][i]);
		}
	}
	
	for(i=0;i<a;i++){
		for(k=0;k<a;k++){
			for(j=0;j<b;j++){
			
			sum=sum+(c[i][j]*d[j][k]);
			
			}
		e[i][k]=sum;
		sum=0;
		}
	}
	
	printf("Result: ");printf("\n");
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			printf("%d ",e[i][j]);
		}
		printf("\n");
	}
	
}
