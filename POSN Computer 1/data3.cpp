#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	int i;
	FILE *fp1,*fp2;
	fp1=fopen("data6.txt","r+t");
	char str[1000]="";
	if(fp1==NULL)
		printf("file I/O error!\n");
	else
{
		char ch;
		int i=0;
		do {
			ch=fgetc(fp1);
			if(ch>=65&&ch<=90){
				ch=ch+32;
			}
			str[i]=ch;
			i++;
		}while(!feof(fp1));
		fclose(fp1);
		fp2=fopen("data6.txt","w+t");
		fprintf(fp2,"%s",str);
		fclose(fp2);
		printf("Copying file is successful..");
	getch();
}
}

