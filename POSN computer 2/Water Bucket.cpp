#include<bits/stdc++.h>
using namespace std;
int maxi,maxj;
struct data{
	int posii,posij;
}d;
queue<data> q;
char map[100][100];
int waterdecay[100][100];
void set_infi()
{
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			waterdecay[i][j]=0;
		}
	}
}
void findway (int posii,int posij)
{
	// 5,5
	if((posii-1!=0&&map[posii-1][posij]=='O')&&(waterdecay[posii][posij]+1<waterdecay[posii-1][posij]&&waterdecay[posii][posij]+1<=8))
	{
		waterdecay[posii-1][posij]=waterdecay[posii][posij]+1;
		d.posii=posii-1;
		d.posij=posij;
		q.push(d);
	}
	if((posii+1!=maxi&&map[posii+1][posij]=='O')&&(waterdecay[posii][posij]+1<waterdecay[posii+1][posij]&&waterdecay[posii][posij]+1<=8))
	{
		waterdecay[posii+1][posij]=waterdecay[posii][posij]+1;
		d.posii=posii+1;
		d.posij=posij;
		q.push(d);
	}
	if((posii-1!=0&&map[posii][posij-1]=='O')&&(waterdecay[posii][posij]+1<waterdecay[posii][posij-1]&&waterdecay[posii][posij]+1<=8))
	{
		waterdecay[posii][posij-1]=waterdecay[posii][posij]+1;
		d.posii=posii;
		d.posij=posij-1;
		q.push(d);
	}
	if((posii+1!=maxj&&map[posii][posij+1]=='O')&&(waterdecay[posii][posij]+1<waterdecay[posii][posij+1]&&waterdecay[posii][posij]+1<=8))
	{
		waterdecay[posii][posij+1]=waterdecay[posii][posij]+1;
		d.posii=posii;
		d.posij=posij+1;
		q.push(d);
	}		
}
void lug ()
{
	while(!q.empty())
	{
		struct data temp=q.front();
		q.pop();
		findway(temp.posii,temp.posij);
	}
}

//water -> 5,5
main(){
	int a,b;
	scanf("%d %d",&a,&b);
//	map[5][5]='W';
//	waterdecay[5][5]=1;
//	findway(5,5);
}



