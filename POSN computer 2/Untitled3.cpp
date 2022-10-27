#include<stdio.h>
using namespace std;
int powerMod(int a,int k,int m){
	if(k==0)
	return 1;
	int p=powerMod(a,k/2,m);
	if(k%2==0)
	return (p*p)%m;
	else
	return (a*p*p)%m;
}
main(){
	printf("%d",powerMod(2,10,5));
}
