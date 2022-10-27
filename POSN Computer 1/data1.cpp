#include<stdio.h>
#include<string.h>
main()
{
	int i;
	FILE *fp;
	fp=fopen ("data3.txt","a+");
	if (fp==NULL)
		printf("File not found\n");
	else{
		    for(i=1;i<=10;i++)
		        fprintf(fp,"%d ",i);
			fprintf(fp,"\n");
		fclose(fp);
	}

}	

