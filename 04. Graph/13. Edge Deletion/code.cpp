#include<bits/stdc++.h>
using namespace  std;
 const int N =1e5+10;
  
  vector<int> v[N];
  int val[N];
  int subtree_sum[N];
   void dfs(int node ,int par=-1)
   {
    subtree_sum[node]+= val[node];
    for(auto child : v[node])
      {
        if(child == par) continue;
        dfs(child,node);
        subtree_sum[node] += subtree_sum[child];
      }
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
     dfs(1,0);
   long long ans =0 ;
   long long M = 1e9+1;
   for(int i=2;i<=n;i++)
    {
        long long part1=subtree_sum[i];
        long long part2=subtree_sum[1]-part1;
        ans=max(ans,(part1,1LL*part2)%M);
    }

  }

