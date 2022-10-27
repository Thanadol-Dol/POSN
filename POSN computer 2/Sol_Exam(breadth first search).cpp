#include<stdio.h>
#include<queue>
using namespace std;
int m,n,edge[105][105],score[105],curr;
queue <int> q;
main(){
	scanf("%d %d",&n,&m);//input Number of student and edge
	for(int i=0;i<m;i++){
		int mocker,original,c;
		scanf("%d %d %d",&mocker,&original,&c);
		edge[original][mocker]=c; //create edge
	}
	
	//start at #1
	q.push(1);
	score[1]=100;
	
	//BFS
	for(;!q.empty();q.pop()){
		curr=q.front();
		if(score[curr]>=50)
			for(int i=1;i<=n;i++){
				if(edge[curr][i]>0){
					q.push(i);
					score[i]=score[curr]-edge[curr][i];
				}
			}
	}
	
	//print
	for(int i=1;i<=n;i++){
		if(score[i]>=50) printf("%d %d\n",i,score[i]);
	}
}
