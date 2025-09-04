#include<bits/stdc++.h>
using namespace  std;
 const int N =1e5+10;
  
  vector<int> v[N];
  int vis[N];
   void dfs(int node ,int par=-1)
   {
    vis[node]=par;
    for(auto child : v[node])
      {
        if(child == par) continue;
        dfs(child,node);
      }
   }
   vector<int> path(int a)
    {
        vector<int>ans;
        while(a !=-1)
         {
            ans.push_back(a);
            a=vis[a];
         
         }
         reverse(ans.begin(),ans.end());
         return ans;
    }
  int main()
  {
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
     {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);

     }
    dfs(1);
    int x,y;
    cin>>x>>y;
        vector<int>path_x=path(x);
        vector<int>path_y=path(y);

    int mn_ln = min(path_x.size(),path_y.size());
    int lca =-1;
    for(int i=0;i<mn_ln;i++)
     {
        if(path_x[i]==path_y[i])
          {
            lca=path_x[i];
          }
          else break;
     }

     cout<<lca<<endl;

  }

