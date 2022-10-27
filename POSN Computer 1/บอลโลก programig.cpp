#include<stdio.h>
#include<string.h>
main()
{
	int score[4][4];
	char team[4][101];
	int i,j,k,temp,a[4]={0},c[4][4],d=0;
	for(i=0;i<4;i++){
		scanf("%s",&team[i]);
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&score[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		if(i==j){
			continue;
		}
		if(score[i][j]>score[j][i]){
			a[i]=a[i]+3;
			c[i][j]=score[i][j]-score[j][i];
		}
		else if(score[i][j]==score[j][i]){
			a[i]=a[i]+1;
			c[i][j]=score[i][j]-score[j][i];
		}
		else if(score[i][j]<score[j][i]){
			a[i]=a[i];
			c[i][j]=score[i][j]-score[j][i];
		}
		}
	}
	char b;
	char tempteam[4][101];
	for(j=0;j<4;j++)
	{
		for(i=0;i<4-1;i++)
		{
			if(a[i+1]>a[i])
			{
				temp=a[i+1];
				strcpy(tempteam[i],team[i+1]);
				a[i+1]=a[i];
				strcpy(team[i+1],team[i]);
				a[i]=temp;
				strcpy(team[i],tempteam[i]);
			}
			if(a[i+1]==a[i]){
				if(c[i+1]>c[i])
				{
					temp=a[i+1];
					strcpy(tempteam[i],team[i+1]);
					a[i+1]=a[i];
					strcpy(team[i+1],team[i]);
					a[i]=temp;
					strcpy(team[i],tempteam[i]);
				}
				}
		}
	}
	for(i=0;i<4;i++){
		printf("%s %d",team[i],a[i]);
		printf("\n");
	}
}
