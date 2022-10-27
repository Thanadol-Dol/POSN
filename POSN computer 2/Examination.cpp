#include<stdio.h>
main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n],i;
	for(i=0;i<n;i++)
	a[i]=100;
	int c,d,e,j;
	for(i=0;i<m;i++){
		scanf("%d %d %d",&c,&d,&e);
		a[c-1]=a[d-1]-e;
	}
	for(i=0;i<n;i++){
		if(a[i]==100&&i!=0){
			a[i]=0;
		}
		if(a[i]>=50){
			printf("%d %d\n",i+1,a[i]);
		}
	}
}
/*12 9
5 2 5
2 1 10
7 1 90
6 1 9
11 1 1
10 11 5
3 6 30
9 6 20
12 10 2*/
