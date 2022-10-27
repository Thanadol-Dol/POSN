#include<stdio.h>
void Line(int n);
main()
{
	Line(4); 	Line(3);
	Line(1);	Line(7);
}
void Line(int n){
	int i;
	for(i=0;i<n;i++)
		printf("-");
	printf("\n");
}
