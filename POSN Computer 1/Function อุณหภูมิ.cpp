#include<stdio.h>
float temparature(float a);
main(){
	float temp;
	temparature(temp);
}
float temparature(float a){
	char b;
	printf("C of F = ");scanf("%c",&b);
	switch(b){
		case 'C':printf("case C = ");scanf("%f",&a);
				printf("F=%.2f",(a*9/5)+32);break;
		case 'F':printf("case F = ");scanf("%f",&a);
				printf("C=%.2f",((a-32)*5)/9);break;
	}
}
