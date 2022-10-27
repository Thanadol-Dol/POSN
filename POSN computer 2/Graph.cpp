#include<stdio.h>
#include<queue>
#define numNode 4
using namespace std;
int graph[numNode][numNode]={0};
void insertEdgeWUG(int a,int b,int w){
	if(a!=b){
	graph[a][b]=w;
	graph[b][a]=w;
	}
}
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
int intDegree(int n){
	int count=0,i;
	for(i=0;i<numNode;i++){
		if(graph[i][n]!=0){
			count++;
		}
	}
	return count;
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
int NextNode(int n){
	int i,temp[4],j=0;
	for(i=0;i<numNode;i++){
		if(graph[n][i]!=0){
			temp[j]=i;
			j++;
		}
	}
	printf("NextNode(%d) = ",n);
	for(i=0;i<j;i++){
		printf("%d ",temp[i]);
	}
	printf("\n");
}
int NextNextNode(int n){
	int i,temp[4],j=0;
	for(i=0;i<numNode;i++){
		if(graph[n][i]!=0){
			temp[j]=i;
			j++;
		}
	}
	for(i=0;i<j;i++){
		printf("Next");
		NextNode(temp[i]);
	}
}
int cost(int a,int b){
	printf("Cost from %dto%d = %d\n",a,b,graph[a][b]);
}
main(){
	int i;
	insertEdgeWUG(0,1,10);
	insertEdgeWUG(0,3,5);
	insertEdgeWUG(3,1,5);
	insertEdgeWUG(1,2,15);
	insertEdgeWUG(2,3,8);
	ShowMatrix();
	for(i=0;i<numNode;i++){
		printf("Node %d intDegree = %d\n",i,intDegree(i));
	}
	printf("-------------------------------\n");
	for(i=0;i<numNode;i++){
		printf("Node %d outDegree = %d\n",i,outDegree(i));
	}
	printf("-------------------------------\n");
	for(i=0;i<numNode;i++){
		NextNode(i);
	}
	printf("-------------------------------\n");
		for(i=0;i<numNode;i++){
		NextNextNode(i);
	}
	printf("-------------------------------\n");
	cost(0,1);
	cost(0,3);
	cost(1,2);
	cost(2,3);
	cost(3,1);
}
