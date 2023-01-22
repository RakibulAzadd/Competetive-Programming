 
#include <bits/stdc++.h>
using namespace std;
vector<int> v[10000];
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
    for (int i = 1; i <= n; i++)
    {
        cout << i ;
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << "->" << v[i][j];
        }
        cout<<endl;
    }
    return 0;
}



/* input
5 4
1 2
2 4
5 1
3 2
5 1
output: 
1->2->5
2->1->4->3
3->2
4->2
5->1
*/
