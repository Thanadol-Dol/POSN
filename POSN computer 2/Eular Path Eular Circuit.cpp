#include<stdio.h>
#include<queue>
#define numNode 4
using namespace std;
int graph[numNode][numNode]={0};
void insertEdgeUG(int a,int b){
	if(a!=b){
	graph[a][b]=1;
	graph[b][a]=1;
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
int outDegree(int n){
	int count=0,i;
	for(i=0;i<numNode;i++){
		if(graph[n][i]!=0){
			count++;
		}
	}
	return count;
}
main(){
	int i,count1=0,count2=0,x=0;
	insertEdgeUG(0,1);x++;
	insertEdgeUG(0,3);x++;
	insertEdgeUG(3,1);x++;
	ShowMatrix();
	for(i=0;i<numNode;i++){
		printf("%d\n",outDegree(i));
		if(outDegree(i)%2!=0){
			count1++;
		}
		else if(outDegree(i)%2==0){
			count2++;
		}
	}
	if(count1==2){
		printf("Euler path");
	}
	if(count2==x){
		printf("Euler circuit");
	}
}
