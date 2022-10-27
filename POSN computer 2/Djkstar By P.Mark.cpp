#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
struct data{
	int node,len;
	
	bool operator <(const data &x)const{
		return x.len < len ;
	}
}d,tempd;

priority_queue <data> q;
int dyn[1001];
vector <data> v[1001];
void findway (int node)
{
	//printf("findway %d\n",node);
	for(int i=0;i<v[node].size();i++)
	{
		//printf("i = %d v[%d][%d].node = %d\n",i,node,i,v[node][i].node);
		if(v[node][i].len+dyn[node]<dyn[v[node][i].node])
		{
			d.len=v[node][i].len+dyn[node];
			d.node=v[node][i].node;
			q.push(d);
		}
	}
	
}

void set_infi()
{
	for(int i=0;i<=1000;i++)
	{
		dyn[i]=999999999;
	}
}

int main()
{
	set_infi();
	int nnode,nedge;
	scanf("%d %d",&nnode,&nedge);
	int a,b,l;
	for(int i=1;i<=nedge;i++)
	{
		scanf("%d %d %d",&a,&b,&l);
		d.len=l;
		d.node=b;
		v[a].push_back(d);
		d.len=l;
		d.node=a;
		v[b].push_back(d);
	}
	scanf("%d %d %d",&l,&a,&b);
	dyn[l]=0;
	findway(l);
	
	while(!q.empty())
	{
		tempd = q.top();
		q.pop();
		if(dyn[tempd.node]>tempd.len)
		{
			dyn[tempd.node]=tempd.len;
			findway(tempd.node);
		}
	}
	if(dyn[a]<dyn[b])
	printf("A %d",dyn[a]);
	else 
	printf("B %d",dyn[b]);
}
