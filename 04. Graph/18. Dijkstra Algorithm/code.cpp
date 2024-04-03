#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int INF=1e9+10;

vector< pair< int , int> > g[N];

void dijkstra(int source  )
 {
    vector<int> vis(N,0);
    vector<int> dist(N,INF);
    
    multiset<pair<int,int> > st;
    st.insert({0,source});
    dist[source]=0;
    while(st.size()>0)
     {
        auto node = *st.begin();
        int v= node.second;
        int dt=node.first;
        st.erase(st.begin());
        if(vis[v]) continue;
        vis[v]=1;
        for(auto child : g[v])
         {
            int child_v= child.first;
            int wt= child.second;
            if(dist[v]+wt<dist[child_v])
             {
                dist[child_v]=dist[v]+wt;
                //cout<< "child_v = " << dist[child_v]<<endl;
                st.insert({dist[child_v],child_v});
             }
         }

          
     }
     cout<<dist[6] <<endl;


 }


int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
      {
        int x,y,wt;
        cin>>x>>y>>wt;
        g[x].push_back({y,wt});
      }
      dijkstra(1);
       
}


/* input : 
6 9
1 2 1
1 3 5
2 3 2
2 4 2
2 5 1
2 3 2
3 5 2
4 5 3
4 6 1
5 6 2
 output :  6


 */