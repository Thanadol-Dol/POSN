#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	FILE *fp1;
	fp1=fopen("data6.txt","r+t");
	int k=0,j[30]={0};
	if(fp1==NULL)
		printf("file I/O error!\n");
	else
{
		char ch;
		int i=0;
		do {
			ch=fgetc(fp1);
			for(i=0;i<26;i++)
			{
				if(ch==i+97){
					j[i]++;
				}
			}
			
		}while(!feof(fp1));
		int max=0;
		printf("a to z :");
		for(i=0;i<26;i++){
			k+=j[i];
		}
		printf("%d\n",k);
		for(i=0;i<26;i++){
			printf("%c %d\n",i+97,j[i]);
		}
		int b;
		int a,x;
		printf("Max = ");
		for(i=0;i<26;i++){
			if(i==0)
			{
				b=j[i];
				x=i;
			}
			if(b<j[i]){
				b=j[i];
				x=i;
			}
		}
		printf("%c %d",x+97,b);
		fclose(fp1);
	getch();
}
}

