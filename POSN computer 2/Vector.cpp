#include<stdio.h>
#include<vector>
using namespace std;
struct data{
	int a,b;
}d;
vector<struct data> v[2];
main(){
	for(int i=0;i<2;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&d.a);
			scanf("%d",&d.b);
			v[i].push_back(d);
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<v[i].size();j++){
			printf("%d",v[i][j].b);
		}
	}
}
