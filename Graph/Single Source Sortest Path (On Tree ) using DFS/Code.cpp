#include <bits/stdc++.h>
using namespace std;
vector<int> v[1000];
int vis[10000], dis[10000];
void DFS(int node, int d)
  {
    vis[node]=1;
    dis[node]=d;
    for(auto child : v[node])
    {
        if(vis[child]==0)
         {
            DFS(child,d+1);
         }
    }
  }
int main()
{
    int n, m, x, y;
    cin >> n >> m;
    while (m--)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int s;
    cin>>s;
    DFS(s,0);
   for(int i=1;i<=n;i++)
    {
        cout<<s<< " - > "<<i<< " : "<<dis[i]<<endl;
    }
}
/*
input:
 7 6
1 2
1 3
2 4 
2 5
3 6
3 7
7
output: 

*/