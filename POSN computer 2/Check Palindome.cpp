#include<bits/stdc++.h>
using namespace std;
reverse(char y[])
{	char temp,tempx[100]={NULL};
	int count,x;
	for(x=0;x<strlen(y);x++)
	{	
		tempx[x]=y[x];
		int i=0,j=x;
		char b[100];
		strcpy(b,tempx);
	
		printf("Before: %s\n",tempx);
	while(i<j)
	{
		temp=b[i];
		b[i]=b[j];
		b[j]=temp;
		i++;
		j--;
	}
		printf("After: %s\n",b);
		if(strcmp(tempx,b)==0)
		printf("Palindrome\n");
		else
		printf("Not Palindrome\n");
		
	}
		
}
main()
{
	char a[100];
	rewind (stdin);
	scanf("%s",&a);
	reverse(a);
}
