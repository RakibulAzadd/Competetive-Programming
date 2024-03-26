#include <bits/stdc++.h>
using namespace std;
vector<int> v[1000];
int vis[1000], col[1000];
bool DFS(int node, int c)
  {  vis[node]=1;
    col[node]=c;
    for(auto child : v[node])
    {
        if(vis[child]==0)
         {
            if(DFS(child,c^1)==false) return false;

         }
        else 
        {
            if(col[child]==col[node])
            return false ;
        }
    }
    return true;
     
  }
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
 bool ok= DFS(1,1);
 if(ok) cout<< "The Graph is Bipartite"<<endl;
 else cout <<  "The Graph is not Bipartite"<<endl;
 
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