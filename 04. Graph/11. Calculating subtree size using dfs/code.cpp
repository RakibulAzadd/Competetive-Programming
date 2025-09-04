#include<bits/stdc++.h>
using  namespace  std;

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'

typedef long long int ll;
typedef unsigned long long int  llu;
int vis[10001],sub_tree_size[10001];
vector<int>v[10001];
int dfs(int node)
{
	vis[node]=1;
	int cnt=1;
	for(int child: v[node])
	{
		if(vis[child]==0)
		{
			cnt+=dfs(child);
		}
	}
	sub_tree_size[node]=cnt;
	return cnt;
}
int main()
{
	int n,m,i,x,y;
	cin>>n>>m;
	while(m--)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1);
	for(i=1;i<=n;i++)
	{
		cout<<"The subtree of "<<i<<" node  is: "<<sub_tree_size[i]<<nl;
	}
	return 0;
}
