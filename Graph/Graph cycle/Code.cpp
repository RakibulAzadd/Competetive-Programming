#include <bits/stdc++.h>
using namespace std;
 vector<int>v[100001];
 int vis[100001];
 int cnt=0;
 bool dfs(int node,int par)
 {
      vis[node]=1;
    for(int child : v[node])
    {
      if(vis[child]==0)
       {
        if(dfs(child,node)==true)return true;
       }
      else
      {
        if(child!=par)
        {
            return true;
        }
      }
    }
    return false;
    
 }
int main()
{ 
   int m,n,x,y;
   cin>>n>>m;
   while(m--)
   {
    cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
   }
   bool ok=dfs(1,-1);
   if(ok)
   {
    cout<< "Cycle "<<endl;
   }
   else 
   {
    cout<< "NO Cycle"<<endl;
   }

    return 0;
}
/*
input:
6 7
1 2
1 3
2 4
2 5
4 6
6 5
5 3
output: 
Cycle
*/