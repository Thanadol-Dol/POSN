#include<stdio.h>
#define numNode 5
int graph[numNode][numNode]={0};

void insertEdgeWDG(int a,int b,int w){
	if(a!=b){
	graph[a][b]=w;
	}
}

void ShowMatrix(){
	int i,j;
	for(i=0;i<numNode;i++){
		for(j=0;j<numNode;j++){
			printf("%d ",graph[i][j]);
		}
		printf("\n");
	}
}

main(){
	int i,a,b,c,temp[numNode]={0},emp[numNode]={0},sum1=0,sum2=0,k;
	scanf("%d",&a);
	for(i=0;i<7;i++){
		scanf("%d %d %d",&a,&b,&c);
		insertEdgeWDG(a,b,c);
	}
	ShowMatrix();
	for(i=0;i<numNode;i++){
		for(k=0;k<numNode;k++){
			sum1=sum1+graph[i][k];
			sum2=sum2+graph[k][i];
		}
		temp[i]=sum1;
		emp[i]=sum2;
		sum1=0;
		sum2=0;
	}
	int fu[numNode],max=0,d;
	for(i=0;i<numNode;i++){
		fu[i]=emp[i]-temp[i];
		if(max<fu[i]){
			max=fu[i];
		}
	}
	if(fu[0]==max){
		printf("A\n");
	}
	if(fu[1]==max){
		printf("B\n");
	}
	if(fu[2]==max){
		printf("C\n");
	}
	if(fu[3]==max){
		printf("D\n");
	}
	if(fu[4]==max){
		printf("E\n");
	}
}
/*5
0 1 10
0 3 5
1 2 15
2 3 10
3 1 10
2 0 20
3 2 15
*/
