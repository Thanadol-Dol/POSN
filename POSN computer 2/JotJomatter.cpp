#include<stdio.h>
#include<queue>
using namespace std;
priority_queue <int> q;
int abs(int x){
	if(x>=0) return x;
	else return -x;
}
main(){
	int x,temp;
	while(1){
		scanf("%d",&x);
		if(x==-1) break;
		if(q.empty()) q.push(x);
		else if(x%2==0&&q.top()%2==0){
			temp=q.top();
			q.pop();
			temp+=x;
			q.push(temp);
		}
		else if(x%2!=q.top()%2){
			temp=q.top();
			q.pop();
			temp=abs(x-temp);
			q.push(temp);
		}
		else q.push(x);
	}
	temp=0;
	for(;!q.empty();q.pop()) temp+=q.top();
	printf("%d",temp);
}


