#include <bits/stdc++.h>
using namespace std;
 const int N=1e5+2;
int vis[N], depth[N];
vector<int> v[N];
void dfs(int node, int par=-1)
{
    for(auto child : v[node])
      {
        if(child==par) continue;
        depth[child]= depth[node]+1;
        dfs(child,node);
      }
}
int main()
{
    int n, m, x, y, i;
    cin >> n >> m;
    while (m--)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1);
    int max_depth=-1;
    int max_d_node;
    for(int i=1;i<=n;i++)
      {
        if(max_depth<depth[i])
          {
            max_depth=depth[i];
            max_d_node=i;
          }
          depth[i]=0;
      }

      dfs(max_d_node);
      max_depth=-1;
       for(int i=1;i<=n;i++)
      {
        if(max_depth<depth[i])
          {
            max_depth=depth[i];
        
          }
          
      }

    cout<< max_depth<<endl;
    
    return 0;
}
