#include<stdio.h>
main()
{
	int p,a,e,o,ce,co;
	printf("P = ");scanf("%d",&p);
	e=p;
	o=p;
	while(e>0&&o>0){
		scanf("%d",&a);
		if(a%2==0){
			ce++;
			co=0;
			if(ce>=3){
				o-=3;
			}
			else{
				o--;
			}	
		}
		else if(a%2!=0){
			co++;
			ce=0;
			if(co>=3){
				e-=3;
			}
			else{
				e--;
			}
		}
	}
	if(e<=0){
		printf("Odd Fighter Win!!(Knock with %d)",a);
	}
	else if(o<=0){
		printf("Even Fighter Win!!(Knock with %d)",a);
	}
}
