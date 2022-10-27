#include<stdio.h>
#define PI 3.14
float calcArea(float);
int main()
{
	float radius,area;
	printf("Enter radius of a circle: ");
	scanf("%f",&radius);
	area = calcArea(radius);
	printf("Area of circle with radius %f is %f\n",radius,area);
	return 0;
}
float calcArea(float radius){
	return PI*radius*radius;
}
