#include<stdio.h>
#include<string.h>
typedef struct{
	char all[100];
	char first_latter;
	char last_latter;
	int	vowels=0;
}words;

main()
{
	int a,b,i,j,points=0;
	printf("N = ");scanf("%d",&a);
	words word[a];
	for(i=0;i<a;i++){
		scanf("%s",&word[i].all);
		word[i].first_latter=word[i].all[0];
		b=strlen(word[i].all);
		word[i].last_latter=word[i].all[b-1];
			for(j=0;j<b-1;j++)
		{
			if(word[i].all[j]=='a'||word[i].all[j]=='e'||word[i].all[j]=='i'||word[i].all[j]=='o'||word[i].all[j]=='u')
				word[i].vowels++;
			if(i!=0)
			    if(word[i-1].vowels==word[i].vowels){
				     points++;
			}	
		}
		if(word[i].first_latter==word[i-1].last_latter){
			points++;
		}
	}
	printf("Point = %d",points);
}
