#include<stdio.h>
#include<string.h>
main(){
	char a[100];
	gets(a);
	int i=0,b=1;
	while(i<strlen(a)){
		if(a[i]==a[i+1]){
			b--;
			break;
		}
		i++;
	}
	if(b!=1){
		printf("Wrong Answer");
	}
	else{
		printf("Accepted");
	}
}
