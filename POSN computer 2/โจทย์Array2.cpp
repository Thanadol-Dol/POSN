#include<stdio.h>
#include<string.h>
int countVowel(char a[]){
	int b,i;
	b=strlen(a);
	int c=0;
	for(i=0;i<b;i++){
		if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
			c++;
		}
		else if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
			c++;
		}
	}
	return c;
}
main(){
	printf("Word: ");
	char d[100];
	gets(d);
	int e;
	e=countVowel(d);
	printf("%d",e);
}
