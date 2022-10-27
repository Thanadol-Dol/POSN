#include<stdio.h>
main()
{
	int sc[5]={6,2,7,4,8};
	int *sc_ptr,a,b,c,d,e;
	sc_ptr=sc;
	a=*sc_ptr;//*(sc_ptr+0);
	b=*(sc_ptr+1);
	c=*(sc_ptr+2);
	d=*(sc_ptr+3);
	e=*(sc_ptr+4);
	printf("%d ",a);
	printf("%d ",b);
	printf("%d ",c);
	printf("%d ",d);
	printf("%d",e);
}
