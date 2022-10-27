#include<stdio.h>
#include<stdlib.h>
main(){
	/*int x=5,*p;
	printf("Address x = %p\n",&x);
	printf("Address p = %p\n",p);
	p++;
	printf("Address after p++ = %p\n",p);
	printf("Data x = %d\n",x);
	printf("Address p = %d\n",p);
	p=&x;
	printf("Address p = %p\n",p);
	printf("Data *p = %d\n",*p);*/
	/*int a=1,b=3,c,*p1,*p2;
	p1=&a;
	p2=&b;
	c=*p1+*p2;
	printf("p1 = %d\n",*p1);
	printf("p2 = %d\n",*p2);
	printf("c = %d\n",c);
	a=*p2+1;
	printf("p1 = %d\n",*p1);*/
	/*int x=1,*px;
	float y=2.50,*py;
	px=&x;
	py=&y;
	printf("Input px : ");
	scanf("%d",px);
	printf("x = %d\n",x);
	printf("Input py : ");
	scanf("%f",py);
	printf("y = %.2f\n",y);*/
	/*int a,b,*px,*py;
	px=&a;
	py=&b;
	printf("Enter a : ");scanf("%d",px);
	printf("Enter b : ");scanf("%d",py);
	printf("%d * %d is %d",*px,*py,(*px)*(*py));*/
	
	/*int *p;
	p = (int*)calloc(4,1);
	printf("data p = %d\n",*p);
	*p=3;
	printf("data p = %d\n",*p);
	free(p);*/
	/*int *pa,*pb;
	pa = (int*)calloc(4,1);
	pb = (int*)calloc(4,1);
	printf("Enter a :");scanf("%d",pa);
	printf("Enter b :");scanf("%d",pb);
	printf("%d + %d is %d",*pa,*pb,(*pa)+(*pb));*/
	int money,*a,*b,*c,*d;
	a=(int*)calloc(4,1);
	b=(int*)calloc(4,1);
	c=(int*)calloc(4,1);
	d=&money;
	printf("Money = ");scanf("%d",d);
	while((*d%100)!=0){
		scanf("%d",d);
	}
	*a=(*d)/1000;
	*b=((*d)%1000)/500;
	*c=(((*d)%1000)%500)/100;

	if((*d/1000)!=0){
		printf("1000 : %d\n",*d/1000);
		*d%=1000;
	}
	if((*d/500)!=0){
		printf("500 : %d\n",*d/500);
		*d%=500;
	}
	if((*d/100)!=0){
		printf("100 : %d\n",*d/100);
		*d%=100;
	}
}
