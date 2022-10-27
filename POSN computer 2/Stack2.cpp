#include<stdio.h>
#include<string.h>

int top=0;
char stack[20];

push(){
	while(top>-1&&top<21){
		scanf("%c",&stack[top]);
		top++;
		if(stack[top-1]=='x'||stack[top-1]=='w'||stack[top-1]=='z')
		{
			top--;
		}
	}
	printf("stack paduk full");
}

pop(){
	int i;
	for(i=top;i>=0;i--){
		printf("%c\n",stack[i]);
	}
}

main(){
	push();
	pop();
}
