#include<stdio.h>
#include<stack>
using namespace std;
main(){
	stack<int> s;
	int a;
	printf("Input decimal number:");
	scanf("%d",&a);
	while(a>0){
		s.push(a%2);
		a=a/2;
	}
	for(;!s.empty();s.pop())
	printf("%d",s.top());
}
