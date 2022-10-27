#include<stdio.h>
#include<string.h>
main(){
	char a[100],countc=0,tempc[countc];
	int k=0,j;
	gets(a);
	for(int i=0;i<strlen(a);i++){
		j=i+1;
		k=0;
		if(a[i]==32){
			i++;
		}
		if(a[i]==95){
			tempc[countc]=32;
			countc++;
			i++;
		}
		if(a[i]==49||a[i]==50&&a[j]!=32&&a[j]!=95){
			k=(a[i]-48)*10;
			k=k+(a[j]-48);
			tempc[countc]=k+64;
			countc++;
			i++;
		}
		else if(a[i]>48&&a[i]<58&&a[j]==32&&a[j]==95){
			k=a[i]-48;
			tempc[countc]=k+64;
			countc++;
			i++;
		}
		else if(a[i]==35&&a[j]!=32&&a[j]!=95){
			tempc[countc]=a[j];
			countc++;
			i++;
		}
	}
	for(int i=0;i<countc;i++){
		printf("%c",tempc[i]);
	}
}
