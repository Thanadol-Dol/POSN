#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	gets(a);
	int i=0;
	int count=0;
	for(i=0;i<strlen(a);i++)
	{
		if((a[i]=='s'||a[i]=='S')&&(a[i+1]=='i'||a[i+1]=='I')&&(a[i+2]=='p'||a[i+2]=='P')&&(a[i+3]=='a'||a[i+3]=='A'))
		{
			printf("\"");
			for(int x=i;x<=i+3;x++)
			{
				printf("%c",a[x]);
			}
			printf("\"");
			count++;
			i+=3;
		}
		else
		{
			printf("%c",a[i]);
		}
	}
		printf("\n%d",count);
}
