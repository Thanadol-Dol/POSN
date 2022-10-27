#include<bits/stdc++.h>
main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int c[a];
	for(int i=0;i<a;i++){
		scanf("%d",&c[i]);
	}
	int min=INT_MIN,sum=c[0];
	while(1){
		for(int i=1;i<=b;i++){
			if(c[i]<min)
			min=c[i];	
		}
		sum+=min;
	}
}
