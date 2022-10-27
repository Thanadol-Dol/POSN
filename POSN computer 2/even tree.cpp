#include<bits/stdc++.h>
using namespace std;
int a[110][110];
bool visit[110];
int node,edge,tempa,tempb;
int result=0;
int dfs(int start)
{	int sum=1;
	int temp;
	visit[start]=true;
	for(int i=1;i<=node;i++)
	{
		if(a[start][i]==1&&visit[i]==0)
		{
			temp=dfs(i);
			if(temp%2==0)
			{
				result++;
			}
			else
			{
				sum+=temp;
			}
		}
	}
	return sum;
}

int main()
{
	scanf("%d %d",&node,&edge);
	for(int i=0;i<edge;i++)
	{
		scanf("%d %d",&tempa,&tempb);
		a[tempa][tempb]++;
		a[tempb][tempa]++;
	}
	dfs(1);
	printf("%d",result);
	return 0;
}
