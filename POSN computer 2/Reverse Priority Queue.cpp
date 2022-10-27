#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;
priority_queue<int,vector<int>,greater<int> > q;
main(){
	for(int i=9;i>=0;i--)
	q.push(i);
	for(;!q.empty();q.pop())
	printf("%d",q.top());
}
