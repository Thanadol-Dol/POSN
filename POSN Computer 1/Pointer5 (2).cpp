#include<stdio.h>
struct s_type{
	int i;
	double d;
}var1;
void f(struct s_type*temp);
void f2(struct s_type*temp);
void f3(struct s_type*temp);
main()
{
	var1.i = 99 ;
	var1.d = 98.6;
	f(&var1);
	f2(&var1);
	f(&var1);
	f3(&var1);
	f(&var1);
}
void f(struct s_type*temp)
{
	printf("%d %f\n",temp->i,temp->d);
}
void f2(struct s_type*temp)
{
	temp->i=100;
	temp->d=101.55;
}
void f3(struct s_type*temp)
{
	scanf("%d",&temp->i);
	scanf("%lf",&temp->d);
}
