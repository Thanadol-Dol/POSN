#include<stdio.h>
main()
{
	int A[5],B[5],a,b,c,d;
	printf("Input Set A : ");
	for(a=0;a<=4;a++){
		scanf("%d",&A[a]);
	}
	printf("Input Set B : ");
	for(b=0;b<=4;b++){
		scanf("%d",&B[b]);
	}
	printf("A union B : ");
	for(c=0;c<=4;c++){
		for(d=0;d<=4;d++){
			if(A[c]==B[d]){
				B[d]=0;
			}
		}
	}
	for(c=0;c<=4;c++){
		printf("%d ",A[c]);
		if(B[c]!=0){
			printf("%d ",B[c]);
		}
	}
}
