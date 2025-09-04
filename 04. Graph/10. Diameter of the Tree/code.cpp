#include<bits/stdc++.h>
using  namespace  std;
 
#define nl      '\n'

typedef long long int ll;
typedef unsigned long long int  llu;

int mx=-(INT_MAX),nod;
int vis[10001],dis[10001];
vector<int>v[10001];
void dfs(int node,int d)
{
	vis[node]=1;
	dis[node]=d;
	if(dis[node]>mx)
	{
		mx=dis[node];
		nod=node;
	}
	for(int child: v[node])
	{
		if(vis[child]==0)
		{
			dfs(child,dis[node]+1);
		}
	}
}
int main()
{
	int n,m,x,y,i;
	cin>>n>>m;
	while(m--)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1,0);
	cout<<mx<<" "<<nod<<nl;
	mx=-1;
	for(i=1;i<=n;i++)vis[i]=0;
	dfs(nod,0);
	cout<<mx<<" "<<nod<<nl;
	cout<<mx<<nl;
	return 0;
}
