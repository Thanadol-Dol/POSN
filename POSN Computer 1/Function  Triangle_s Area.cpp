#include<stdio.h>
float inputint(void);
float triangle(float h,float b);
main(){
	float a,b,c;
	printf("height = "); scanf("%f",&a);
	printf("base = ");scanf("%f",&b);
	c=triangle(a,b);
	printf("area=%f",c);
}
float triangle(float h,float b)
{
	return b*h*0.5;
}
