#include<stdio.h>
main()
{
	float a;
	int b=0;
	scanf("%f",&a);
	while(a>=0.1){
		a*=0.9;
		b++;
	}
	printf("%d",b);
}
