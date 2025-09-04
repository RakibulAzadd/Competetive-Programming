#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int parent[N], size[N];
void make(int v){
    parent[v]=v;
    size[v]=1;
}
int find(int v)
  {
    if(parent[v]==v) return parent[v];
    return parent[v]=find(parent[v]);
  }
  void Union(int a , int b)
    {
        a=find(a);
        b=find(b);
        if(a!=b){
            if(size[a]<size[b])
            swap(a,b);
            parent[b] = a;
            size[a] += size[b];
        }

    }
 int main()
  {
        int n,m;
        cin>>n>>m;
        vector< pair <int, pair< int,int> > > edges;

        for(int i=0;i<m;i++)
         {
              int u,v,wt;
              cin>>u>>v>>wt;
              edges.push_back({wt,{u,v}});
         }
         sort(edges.begin(),edges.end());
         for(int i=1 ;i<=n;i++) make(i);
         int total_cost=0;
         for(auto &ed : edges)
           {
             int wt = ed.first;
             int u= ed.second.first;
             int v= ed.second.second;
             if(find(u) == find(v)) continue;
             Union(u,v);
             total_cost+=wt;
             cout<< u <<  ' '<< v<< endl;

           }
         
       cout<<total_cost<<endl;


     return 0;
  }
  /* input : 6 9
5 4 9
1 4 1
5 1 4
4 3 5
4 2 3
1 2 2
3 2 3
3 6 8
2 6 7
 output : 1 4
1 2
3 2
5 1
2 6
17*/