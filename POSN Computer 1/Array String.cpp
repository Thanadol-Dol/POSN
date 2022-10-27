#include<stdio.h>
main()
{
	int Id,Score;
	char FullName[10];
	printf("Enter :"); scanf("%d",&Id);
	rewind(stdin);
	printf("Enter :"); gets(FullName);
	printf("Enter :"); scanf("%d",&Score);
	printf("Id=%d Name=%s Score=%d",Id,FullName,Score);
}
