#include<stdio.h>
int TOS=0,MAXSTACKSIZE=20,x=0;
char S[20];
void PUSH(char S[],char X)
{
	if 	(TOS<MAXSTACKSIZE)
		{
		TOS=TOS+1;
		S[TOS]=X;
		}
	else
		printf("Stack is Overflow");
}
int POP(char S[])
{
	if 	(TOS!=0)
		{
		TOS=TOS-1;
		}
	else
	{
		printf("Stack is Underflow");
		x=1;
	}
}

main(){
	int i=0,j,check=0;
	char A[100];
	//scanf("%s",A);
	FILE *fp;
	fp = fopen("test.txt","r+");
	fscanf(fp,"%s",A);
	while(A[i]!='\0')
	{
	PUSH(S,A[i]);
	i++;
}

	//fclose(fp);
	//fp = fopen("asd.txt","a+");
	fprintf(fp,"\n");
	for(int i=TOS;i>0;i--)
	if(x==0){
	printf("%c",S[i]);
	}
	for(j=0;j<=i;j++){
		if(A[i-j]!=S[j]){
			check=1;
		}
	}
	if(check==1){
		printf("\nNot Palindome");
	}else{
		printf("\nPalindome");
	}
	fclose(fp);
}
