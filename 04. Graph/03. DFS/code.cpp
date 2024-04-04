#include <bits/stdc++.h>
using namespace std;
vector<int> v[10000];
int visit[10002];

  int DFS(int node)
{
    visit[node] = 1;
    cout << node << "->  ";
    for (int i = 0; i < v[node].size(); i++)
    {
        int child = v[node][i];
        if (visit[child] == 0)
        {
            DFS(child);
        }
    }
}
int main()
{
    int n, m; // n=node , m= edge
    cin >> n >> m;
    int x, y;
    while (m--)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    DFS(1);
    return 0;
}
/*
input: 
6 5
1 2
2 3
2 4
4 5
4 6
output: 1->2->3->4->5->6->

*/
