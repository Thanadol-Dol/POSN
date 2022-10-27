#include<stdio.h>
float circle(float radius);
main(){
	float a,c;
	printf("radius = ");scanf("%f",&a);
	c=circle(a);
	printf("area=%f",c);
}
float circle(float radius)
{
	return 3.14*radius*radius;
}
