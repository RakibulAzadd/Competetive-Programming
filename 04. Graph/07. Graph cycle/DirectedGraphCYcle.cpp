#include <bits/stdc++.h>
using namespace std;

bool visited[1000], cycleStack[1000];

vector<int> v[1000];
bool CycleDetect(int node)
{
    visited[node] = true;
    cycleStack[node] = true;

    for (int child : v[node])
    {
        if (visited[child] == false)
        {
            if (CycleDetect(child))
                return true;
        }
        else if (cycleStack[child] == true)
            return true;
    }
    cycleStack[node] = false;
    return false;
}

int main()
{
    vector<vector<int>> edges = { {0, 2}, {0, 3}, {1, 2},{1, 3}, {3, 4}, {4, 1}};
    for (int i = 0; i < edges.size(); i++)
    {
        int x = edges[i][0];
        int y = edges[i][1];

        v[x].push_back(y);
    }
    bool ok = false;

    for (int i = 0; i <= 5; i++)
    {
        if (!visited[i] && CycleDetect(i))
        {   cout<<i<<endl;
            ok = true;
            break;
        }
    }

    if (ok)
    {
        cout << "Cycle" << endl;
    }
    else
    {
        cout << "Not Cycle" << endl;
    }
}