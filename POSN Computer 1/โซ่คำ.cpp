#include<stdio.h>
#include<string.h>
typedef struct
{
	char word[100];
	char letter;
}chains;

main()
{
	int a,b,i,j,c=0;
	scanf("%d",&a);
	scanf("%d",&b);
	chains words[b];
	for(i=0;i<b;i++){
		scanf("%s",&words[i].word);
	}
	for(i=0;i<b;i++){
		c=0;
		for(j=0;j<a;j++){
			if(i>=1){
				if(words[i].word[j]==words[i-1].word[j])
				{
					c++;
				}
			}
		}
		if(c<2){
			printf("%s",words[i-1].word);
		}
	}
}
