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
        int n,k;
        cin>>n>>k;
        for(int i=1;i<=n;i++)
         {
            make(i);
         }
         while(k--){
            int u,v;
            cin>>u>>v;
            Union(u,v);
         }
    int connected_ct=0;
    for(int i=1;i<=n;i++) 
     {
        if(find(i)==i) connected_ct++;
     }
     cout<<connected_ct<<endl;
     return 0;
  }
  /* input : 2
1 2
4 1
 output : 2 */