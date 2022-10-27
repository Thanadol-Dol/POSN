#include<stdio.h>
#include<stack>
using namespace std;
main(){
	char temp;
	stack<char> s;
	while(1){
		scanf("%c",&temp);
		if(temp=='\n')break;
		s.push(temp);
	}
	int sum1=0;
	int sum2=0;
	int num=1;
	int nu=1;
	while(!s.empty()){
		if(s.top()!='H'&&s.top()!='C'&&s.top()!='O'&&s.top()!=')'&&s.top()!='('){
			int ns=s.top()-'0';
			num=num*ns;
			s.pop();
		}
		else if(s.top()=='H'){
			sum1+=num;
			s.pop();
			num=1;
		}
		else if(s.top()=='C'){
			sum1+=(num*12);
			s.pop();
			num=1;
		}
		else if(s.top()=='O'){
			sum1+=(num*16);
			s.pop();
			num=1;
		}
		else if(s.top()==')'){
			s.pop();
			while(s.top()!='('){
				if(s.top()-'0'<10){
					nu*=s.top()-'0';
					s.pop();
				}
				else if(s.top()=='H'){
					sum2+=nu;
					s.pop();
					nu=1;
				}
				else if(s.top()=='C'){
					sum2+=(nu*12);
					s.pop();
					nu=1;
				}
				else if(s.top()=='O'){
					sum2+=(nu*16);
					s.pop();
					nu=1;
				}
			}
			s.pop();
			sum1+=sum2*num;
			num=1;
		}
	}
	printf("%d",sum1);
}
