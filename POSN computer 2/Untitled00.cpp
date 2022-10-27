#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> v[100];
main(){
	int node,edge,t1,t2;
	scanf("%d %d",&node,&edge);
	for(int i=0;i<edge;i++){
		scanf("%d %d",&t1,&t2);
		v[t1].push_back(t2);
	}
	int count[node+1]={0};
	for(int i=1;i<=node;i++){
		for(int j=0;j<v[i].size();j++){
			count[v[i][j]]++;
		}
	}
	for(int i=1;i<=node;i++){
		if(count[i]==node-1){
			printf("%d\n",i);
		}
	}
}
