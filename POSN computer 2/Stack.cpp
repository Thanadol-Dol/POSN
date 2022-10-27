#include<stdio.h>
#define MAX 5
int top=-1,stack[MAX];
push(){
	int val;
	if(top==MAX-1){
		printf("PADUK FULL");
	}
	else{
		printf("Element ");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
}
pop(){
	int val;
	if(top==-1){
		printf("PADUK EMPTY");
	}
	else{
		printf("Deleted Element %d ",stack[top]);
		top=top-1;
	}
}
display(){
	int i;
	if(top==-1){
		printf("PADUK EMPTY");
	}
	else{
		printf("Stack's Element ");
		for(i=top;i>=0;i--){
			printf("%d\n",stack[i]);
		}
	};
}
main(){
	int a;
	while(a!=4){
	printf("MENU:\n");
	printf("1.PUSH\n");
	printf("2.POP\n");
	printf("3.DISPLAY\n");
	printf("4.EXIT\n");
	scanf("%d",&a);
	switch(a){
		case 1:push();break;
		case 2:pop();break;
		case 3:display();break;
	}
	}
}
