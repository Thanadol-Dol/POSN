

int graphp[100][100];
struct data{
	int node,weight;
}d;

vector <struct data> v[100];

i = 0;
j = 5;
weight = 100;

d.node=j;
d.weight=weight;
v[i].push_back(d);


d.node=i;
d.weight=weight;
v[j].push_back(d);

for(int k=0;k<v[i].size();k++)
{
	v[i][k].node;
	v[i][k].weight;
}



















