#include<bits/stdc++.h>
using namespace std;
int vis[100001],in[100001],out[100001];
vector<int>v[100001];
int cn=1;
void dfs(int node)
  {
    vis[node]=1;
    in[node]= cn++;
    for(int child : v[node])
      {
        if(vis[child]==0) dfs(child);
      }
   out[node]=cn++;
  }
int main()
{
  int n,m,x,y;
  cin>>n>>m;
   for(int i=0;i<m;i++)
    {
      cin>>x>>y;
      v[x].push_back(y);
      v[y].push_back(x);
    }
    dfs(1);
    for(int i=1;i<=n;i++)
     {
      cout<< i<< " IN in the dfs : "<< in[i]<< " out in the dfs: "<<out[i]<<endl;
     }
}