#include<stdio.h>
#include<string.h>

char string[20];
push(){
	printf("Strings: ");
	scanf("%s",&string);
}
pop(){
	int a,i;
	a=strlen(string);
	for(i=a;i>=0;i--){
		printf("%c\n",string[i]);
	}
}

main(){
	push();
	pop();
}
