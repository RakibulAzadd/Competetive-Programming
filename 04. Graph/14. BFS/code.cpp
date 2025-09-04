#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> graph[N];
int visit[N];
int level[N];

void BFS(int source)
{
    queue<int> q;
    q.push(source);
    visit[source] = 1;

    while (!q.empty())
    {
        int current_v = q.front();
        q.pop();

        cout << current_v << " ";
        for (auto child : graph[current_v])
        {

            if (visit[child] == 0)
            {
                q.push(child);
                visit[child] = 1;
                level[child] = level[current_v] + 1;
            }
        }
    }
    cout<<endl;
}

int main()
{
    int n;
    cin >> n;
    int e = n - 1;
    while (e--)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    BFS(1);
    for (int i = 1; i <= n; i++)
    {
        cout << " level of " << i << " = " << level[i] << endl;
    }
}


/* INput :  
    13 
1 2 
1 3
1 13
2 5
5 6
5 7
5 8 
8 12
3 4
4 9
4 10
10 11

   output :
      1 2 3 13 5 4 6 7 8 9 10 12 11 
 level of 1 = 0
 level of 2 = 1
 level of 3 = 1
 level of 4 = 2
 level of 5 = 2
 level of 6 = 3
 level of 7 = 3
 level of 8 = 3
 level of 9 = 3
 level of 10 = 3
 level of 11 = 4
 level of 12 = 4
 level of 13 = 1

*/
    