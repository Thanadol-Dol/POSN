#include<stdio.h>
main(){
	int a,b,i,j,k,sum=0;
	scanf("%d %d",&a,&b);
	int c[a][b],d[b][a],ans[a][a];
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&c[i][j]);
		}
	}
	for(i=0;i<b;i++){
		for(j=0;j<a;j++){
			scanf("%d",&d[i][j]);
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			for(k=0;k<b;k++){
					sum+=c[i][k]*d[k][j];
			}
			ans[i][j]=sum;
			sum=0;
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
}
