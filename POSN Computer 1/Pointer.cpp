#include<stdio.h>
#include<string.h>
main()
{	
	/*char name[25];
	gets(name);
	printf("%s",name);
	*/
	/*char msg[15];
	printf("Enter money : ");
	scanf("%9[1234567890,.$]s",msg);
	printf("%s",msg);*/
	/*char msg[10];
	int i=0,j=0;
	char str[10];
	scanf("%s",msg);
	while(msg[i]!='\0')
		++i;
	while(j<i){
		str[i-j-1]=msg[j];
		++j;
	}
	printf("\n%s",str);*/
	/*char name[20]="";
	char question[20]="What is your name?";
	puts(question);
	gets(name);
		printf("You are %s\n",name);*/
	/*char message[40];
	char *msg=message;
	printf("Enter message : ");
	gets(msg);
	printf("%s",msg);*/
	/*int a,b;
	char c[20];
	printf("Enter Id : ");scanf("%d",&a);
	rewind(stdin);
	printf("Enter Name : ");gets(c);
	printf("Enter Score : ");scanf("%d",&b);
	printf("Id=%d Name=%s Score=%d",a,c,b);*/
	/*char name[256];
	int s;
	gets(name);
	s=strlen(name);
	printf("%s=%d",name,s);*/
	/*char sname[256]="suksintharanon";
	strcpy(sname,"kukimiya");
	printf("Phutthawadee %s",sname);*/
	/*char str[15]="Technology";
	char msg1[]="Short";
	char msg2[]="Other";
	strncpy(msg1,str,2);
	printf("%s\n",msg1);
	puts(msg2);*/
	/*char str1[20],str2[20];
	char str3[50]="";
	gets(str1);
	gets(str2);
	strcat(str3,str1);
	strcat(str3,str2);
	printf("%s",str3);*/
	/*char s1[40]="ABCDE";
	char s2[40]="ABC";
	int result=0;
	result=strcmp(s1,s2);
	if(result==0)
		printf("%s is equal %s.\n",s1,s2);
	else
		printf("%s is not equal %s\n",s1,s2);*/
	/*char str[40]="My favorite fruit is Mango";
	char a='y'; char *ptr;
	ptr=strchr(str,a);
	if(ptr!=NULL)
		printf("Found");
	else
		printf("Not Found");*/
	/*char *str="My dog is the brown dog.";
	char a ='d',*ptr =0; int r=0;
	ptr =strrchr(str,a);
	r=ptr-str;
	printf("%d",r);*/
	/*char *ptr =0;
	ptr =strstr("Boonmee is my friend.","my");
	printf("%s\n",ptr);	*/
	/*char buf[40] ="10,somsri,1500.45";
	char *token;
	token=strtok(buf,",/t/n"); 
	while(token!=NULL)
	{
		printf("%s\n",token);
		token=strtok(NULL,",/t/n");
	}*/
	/*char text[20];
	int num;
	gets(text);
	num=strlen(text);
	for(int i=0;i<num;i++){
		if(text[i]=='X'||text[i]=='x'){
			printf("a");
		}else if(text[i]=='y'||text[i]=='Y'){
			printf("b");
		}else if(text[i]=='Z'||text[i]=='z'){
			printf("c");
		}else if(text[i]==' '){
			printf(" ");
		}
		else printf("%c",text[i]+3);
	}*/
	/*char text[20];
	int num;
	gets(text);
	num=strlen(text);
	for(int i=0;i<num;i++){
		if(text[i]=='a'||text[i]=='A'){
			printf("x");
		}else if(text[i]=='b'||text[i]=='B'){
			printf("y");
		}else if(text[i]=='c'||text[i]=='C'){
			printf("z");
		}else if(text[i]==' '){
			printf(" ");
		}
		else printf("%c",text[i]-3);
	}*/
	/*int i,sum=0,b;
	char a[1000];
	gets(a);
	b=strlen(a);
	for(i=0;i<b;i++){
		if(a[i]=='h'||a[i]=='H'){
			sum++;
		}
	}
	printf("%d",sum);*/
	
}
