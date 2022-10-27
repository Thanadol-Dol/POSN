#include<stdio.h>
#include<string.h>
main(){
	char name1[10],name2[10],temp[10];
	int res;
	printf("enter 2 string :");
	scanf("%s %s",name1,name2);
	res=strcmp(name1,name2);
	if(res>0){
		printf("greater\n");
		strcpy(temp,name1);
		strcpy(name1,name2);
		strcpy(name2,temp);
		printf("%s %s\n",name1,name2);
	}
	else if(res<0)
	printf("less\n");
	else{
		printf("same and length=");
		printf("%d\n",strlen(name1));
	}
}
