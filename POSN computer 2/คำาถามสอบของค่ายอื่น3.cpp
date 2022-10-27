#include<bits/stdc++.h>
using namespace std;
int Up[27],Low[27][27];
main(){
	int countu=0,countl=0;
	char dna[1000000];
	rewind(stdin);
	gets(dna);
	for(int i=0;i<strlen(dna);i++){
		if(isupper(dna[i])&&islower(dna[i+1])){
			Low[dna[i]-'A'][dna[i+1]-'a']++;
			i++;
		}
		else if(isupper(dna[i])&&!islower(dna[i+1])){
			Up[dna[i]-'A']++;
		}
	}
	for(int i=0;i<27;i++){
			if(Up[i]>0){
				countu++;
			}
		for(int j=0;j<27;j++){
			if(Low[i][j]>0){
				countl++;
			}
		}
	}
	printf("%d\n",countu);
	for(int i=0;i<27;i++){
		if(Up[i]>0){
			printf("%c ",i+65);printf("%d\n",Up[i]);
		}
	}
	printf("%d\n",countl);
	for(int i=0;i<27;i++){
		for(int j=0;j<27;j++){
			if(Low[i][j]>0){
				printf("%c%c ",i+65,j+97);printf("%d\n",Low[i][j]);
			}
		}
	}
}
