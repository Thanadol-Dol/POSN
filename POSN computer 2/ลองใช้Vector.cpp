#include<stdio.h>
#include<vector>
using namespace std;
struct data{
	int a;
}d;
vector<struct data> v[10];
main(){
	for(int i=0;i<=10;i++){
		d.a=i;
		v[i].push_back(d);
	}
	for(int i=0;i<=10;i++)
	printf("%d\n",v[i].back());
}
