#include <bits/stdc++.h>
using namespace std;

int visited[1000];
vector<int> v[1000];
bool CycleDetect(int source, int parent)
{
    visited[source] = 1;
    for (int child : v[source])
    {
        if (visited[child] == 0)
        {
            if (CycleDetect(child, source))
                return true;
        }
        else if (child != parent){
            return true;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {0, 3}, {1, 2}, {3, 4}, {4, 5}};
    for (int i = 0; i < edges.size(); i++)
    {
        int x = edges[i][0];
        int y = edges[i][1];

        v[x].push_back(y);
    }

    if (CycleDetect(0, -1))
    {
        cout << "Cycle" << endl;
    }
    else
    {
        cout << "Not Cycle" << endl;
    }
}