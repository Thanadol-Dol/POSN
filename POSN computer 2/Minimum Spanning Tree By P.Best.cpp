#include<bits/stdc++.h>
using namespace std;
struct egde{
	int a;
	int b;
	int w;
	bool operator<(const egde  &fuck)const{
		return fuck.w<w;
	}
}temp;
priority_queue<egde> P;
int e,n,t1,t2,w,sum,head[100000];
int fi(int x){
	if(head[x]==x) 
	return x;
	return head[x]=fi(head[x]);
} 
void uni(int a,int b){
	int A=fi(a),B=fi(b);
	head[B]=A;
}
main(){
	scanf("%d %d",&n,&e);
	for(int i=0;i<=n;i++) 
	head[i]=i;
	for(int i=0;i<e;i++){
		scanf("%d %d %d",&t1,&t2,&w);
		temp.a=t1,temp.b=t2,temp.w=w;
		P.push(temp);
	}
	for(;!P.empty();P.pop()){
		temp=P.top();
		if(fi(temp.a)!=fi(temp.b)){
			uni(temp.a,temp.b);
			sum+=temp.w;
		}
	}
	printf("%d",sum);
}
