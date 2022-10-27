#include<bits/stdc++.h>
pattern(){
	char a[100],b[20];
	int count=0,temp;
	printf("Enter 2 String :");
	rewind(stdin);
	gets(a);
	rewind(stdin);
	gets(b);
	for(int i=0;i<strlen(a);i++){
		count=0;
		for(int j=0;j<strlen(b);j++){
			if(a[i+j]==b[j]){
				count++;
			}
		}
		if(count==strlen(b)){
			for(int k=i;k<count+i;k++){
				a[k]='*';
			}
		}
	}
	printf("%s",a);
}
main(){
	pattern();
}
