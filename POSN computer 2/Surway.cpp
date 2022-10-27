#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
int n,m;
struct Direction{
	int a,d;
	bool operator <(const Direction &x)const{
		return x.d<d;
	}
};
vector <vector <Direction> > node;
vector <int> Min;
priority_queue <Direction> q;
main()
{
	int s,A,B;
	scanf("%d %d",&n,&m);
	node.resize(n+2);
	Min.resize(n+2,-1);
	struct Direction di;
	for(int i=0;i<m;i++){
		int a,b;
		scanf("%d %d %d",&a,&b,&di.d);
		//Undirected Graph
		di.a=b;
		node[a].push_back(di);
		di.a=a;
		node[b].push_back(di);
	}
	scanf("%d %d %d",&s,&A,&B);
	
	//Start at s
	di.a=s;
	di.d=0;
	Min[s]=0;
	q.push(di);
	
	//  Dijstar Algorithm
	//  https://www.youtube.com/watch?v=gdmfOwyQlcI
	while(!q.empty()){
		int curr=q.top().a;
		q.pop();
		for(int i=0;i<node[curr].size();i++){
			if(Min[node[curr][i].a]==-1){
				q.push(node[curr][i]);
				Min[node[curr][i].a]=Min[curr]+node[curr][i].d;
			}
			else if(Min[curr]+node[curr][i].d<Min[node[curr][i].a]){
				q.push(node[curr][i]);
				Min[node[curr][i].a]=Min[curr]+node[curr][i].d;
			}
		}
	}
	
	//print
	if(Min[A]<Min[B]) printf("A %d",Min[A]);
	else printf("B %d",Min[B]);
}
