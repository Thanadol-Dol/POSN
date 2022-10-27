#include<stdio.h>
#include<queue>
using namespace std;
main(){
	queue<int> q;
	int a;
	scanf("%d",&a);
	int b[a][a];
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			scanf("%d",&b[i][j]);
		}
	}
	int sum1=0,sum2=0,sum3=0,sum4=0;
	for(int i=0;i<a;i++){
		sum1=0;
		sum2=0;
		for(int j=0;j<a;j++){
			if(i+j==a-1){
				sum4+=b[i][j];
			}
			sum1+=b[i][j];
			sum2+=b[j][i];
		}
		sum3+=b[i][i];
		q.push(sum1);
		q.push(sum2);
}
	q.push(sum3);	
	q.push(sum4);
	int	c,e=1;
	while(1){
		c=0;
		c=q.front();
		q.pop();
		if(q.empty()){
			break;
		}
		else if(c!=q.front()){
			e--;
		}
	}
	if(e!=1){
		printf("No");
	}
	else{
		printf("Yes");
	}
}
/*4
16 2 3 13
5 11 10 8
9 7 6 12
4 14 15 1*/
