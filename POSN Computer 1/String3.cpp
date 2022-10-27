#include<stdio.h>
main(){
	int a,d,f;
	char b[40],g[100];
	float e,h;
	
	printf("Id : "); scanf("%d",&a);
	rewind(stdin);
	printf("Fullname : "); scanf("%s",&b);
	rewind(stdin);
	printf("Age : "); scanf("%d",&d);
	rewind(stdin);
	printf("Weight : "); scanf("%f",&e);
	rewind(stdin);
	printf("Height : "); scanf("%d",&f);
	rewind(stdin);
	printf("Home : "); scanf("%s",&g);
	rewind(stdin);
	printf("Grade : "); scanf("%f",&h);
	printf("Id=%d Fullname=%s Age=%d Weight=%.1f Height=%d Home=%s Grade=%.2f",a,b,d,e,f,g,h);
}
