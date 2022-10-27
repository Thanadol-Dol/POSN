#include<stdio.h>
#include<string.h>
main()
{
	char name[25];
	int code,i;
	float score;	
	FILE *fp;
	fp=fopen ("text2.txt","w+t");
	if (fp==NULL)
		printf("File not found\n");
	
else{
	for(i=0;i<3;i++){
		printf("Code : ");
		scanf("%d",&code);
		rewind(stdin);
		printf("Name : ");
		gets(name);
		printf("Score : ");
		scanf("%f",&score);
		fprintf(fp,"Code=%d\nName=%s\nScore=%f\n",code,name,score);	
	}
	fclose(fp);
       }
}

