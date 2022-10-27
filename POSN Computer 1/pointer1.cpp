#include<stdio.h>
main()
{
	float      a = 3.5 , b; 
	float     *pa ,*pb;
	pa  =  &a ;
	pb=pa;

	printf("%f",*pb);
}
