 #include <bits/stdc++.h>
using namespace std;
vector<int> v[10000];
int visit[10002];
 void DFS(int node)
{
    visit[node] = 1;
    for (auto i : v[node])
    {
        if (visit[i] == 0)
        {
            DFS(i);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int x, y;
    while (m--)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int co=0;
    for(int i=1;i<=n;i++)
    {
        if(visit[i]==0)
           {
             co++;
             DFS(i);
           }
    }
    cout<<co<<endl;
    return 0;
}
/*
input: 
8 5
1 2
2 3
2 4
3 5
6 7
output: 3

*/