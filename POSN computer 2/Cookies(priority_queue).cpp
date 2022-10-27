#include<stdio.h>
#include<queue>
using namespace std;
main(){
	int n,k,i,a;
	priority_queue<int> q;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		q.push(a);
	}
	int count=0;
	while(q.size()>=1){
		if(q.empty()){
			printf("-1");
			return 0;
		}
		int first=q.top();
		if(first>=k){
			printf("%d",count);
			return 0;
		}
		q.pop();
		int second=q.top();
		q.pop();
		count++;
		int mix=first+(2*second);
		q.push(mix);
	}
}
