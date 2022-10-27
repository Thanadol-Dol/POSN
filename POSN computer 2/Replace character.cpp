#include<bits/stdc++.h>
replace(){
	char a[20],b;
	int c=1;
	printf("Enter The String :");
	rewind(stdin);
	gets(a);
	printf("Enter The Character :");
	rewind(stdin);
	scanf("%c",&b);
	for(int i=0;i<strlen(a);i++){
		if(c==1){
			if(a[i]==b){
				a[i]='#';
				c--;
			}
		}
	}
	printf("String after replacement of character:%s",a);
}
main(){
	replace();
}
