#include<stdio.h>
#include<string.h>
main()
{
	char i=0,c=0;
	char name[]="01010110101010";
	printf("s\n",name);
	while(name[i]!='\0')
	{
		if(name[i]=='0')
			name[i]='A';
		else{
			c++;
		}
		i++;
	}
	printf("%s\n",name);
	printf("%d",c);
	
}
