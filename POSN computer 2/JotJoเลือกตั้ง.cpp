#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
main(){
	int count[8]={0};
	char vote[6][100]={0};
	for(int i=0;i<6;i++){
		switch(i){
			case 0:printf("Mon:");gets(vote[i]);break;
			case 1:printf("Tue:");gets(vote[i]);break;
			case 2:printf("Wed:");gets(vote[i]);break;
			case 3:printf("Thr:");gets(vote[i]);break;
			case 4:printf("Fri:");gets(vote[i]);break;
			case 5:printf("Sat:");gets(vote[i]);break;
		}
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<strlen(vote[i]);j++){
			for(int k=1;k<=8;k++){
				if(vote[i][j]-48==k){
					count[k-1]++;
				}
			}
		}
	}
	int min=100,num;
	for(int i=0;i<8;i++){
		if(count[i]<min){
			min=count[i];
			num=i+1;
		}
	
	}
	printf("lowest number is %d",num);
}
