#include <bits/stdc++.h>
using namespace std;
 const int N=1e5+2;
int vis[N], depth[N] , height[N];
vector<int> v[N];
void dfs(int node, int par=-1)
{
    for(auto child : v[node])
      {
        if(child==par) continue;
        depth[child]= depth[node]+1;

        dfs(child,node);
        height[node]= max(height[node],height[child]+1);
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
     
    for(int i=1;i<=n;i++)
      {
        cout<< i << " depth = " << depth[i] << "  height = "<< height[i]<<endl;
      }

      
    
    return 0;
}
