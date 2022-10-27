#include<stdio.h>
#include<queue>
using namespace std;
struct gg{
	int i,j,val;
	bool operator<(const gg &x)const{
		return x.val<val;
	}
};
priority_queue<gg> q;
main(){
	struct gg temp;
	int max2,max5,pow2,pow5,two=2,five=5;
	scanf("%d %d",&max2,&max5);
	for(pow2=1;pow2<=max2;pow2++){
		temp.i=pow2;
		five=5;
		for(pow5=1;pow5<=max5;pow5++){
			temp.j=pow5;
			temp.val=two+five;
			q.push(temp);
			five*=5;
		}
		two*=2;
	}
	for(;!q.empty();q.pop()){
		printf("2^%d+5^%d=%d\n",q.top().i,q.top().j,q.top().val);
	}
}
