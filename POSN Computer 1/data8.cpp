#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	int i,j;
	FILE *fp1;
	fp1=fopen("data7.txt","r+t");
	if(fp1==NULL)
		printf("file I/O error!\n");
	else
{
		char ch;
		int i=0;
		do {
			ch=fgetc(fp1);
			if(ch==' '||ch=='\n'){
				continue;
			}
			i++;
		}while(!feof(fp1));
		printf("%d",i);
		fclose(fp1);
	getch();
}
}

