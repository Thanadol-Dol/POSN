#include<stdio.h>
#include<queue>
using namespace std;
struct structofdata{
	int age;
	char name[50];
}data,temp_of_queue_top;
queue<structofdata> q; 
main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %s",&data.age,data.name);
		q.push(data);
	}
	while(!q.empty()){
		temp_of_queue_top = q.front();
		printf("%d %s ",temp_of_queue_top.age,temp_of_queue_top.name);
		q.pop();
	}
	
}
