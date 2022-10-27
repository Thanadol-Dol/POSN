#include<stdio.h>
#include<queue>
using namespace std;
main(){
	queue<int> q,ans;
	int g,i,m,n,point=0,card;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&card);
		q.push(card);
	}
	for(i=0;i<m;i++){
		scanf("%d",&g);
		if(q.front()==g){
			ans.push(g);
			point++;
		}
		else{
			q.push(g);
		}
		q.pop();
		if(point==n){
			printf("congratulations");
			break;
		}
	}
	if(point==0){
		printf("bad");
	}
	else if(point<n){
		for(i=0;i<point;i++){
			printf("%d ",ans.front());
			ans.pop();
		}
	}
}

