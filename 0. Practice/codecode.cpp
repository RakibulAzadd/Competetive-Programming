#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
const int mn = 1e5 + 9;
using namespace std;
const int INF = 1e9 + 10;
const int mm = 2e5 + 10;

void solve()
{
  int n;
  cin >> n;
  if (n == 1)
  {
    cout << 1 << endl;
    return;
  }
  else if (n == 2)
    cout << 1 << " " << 2;
  else if (n == 3)
    cout << 1 << " " << 3 << " " << 2;
  else
  {
    int in = 8, cou = 3;
    cout << 1 << " " << 3 << " " << 2 << " ";
    while (in <= n)
    {
      cout << in - 1 << " ";
      for (int i = in / 2; i < in - 1; i++)
        cout << i << " ";
      cou = in - 1;
      in *= 2;
    }
    if (cou < n)
    {
      cout << n << " ";
      for (int i = cou + 1; i <= n - 1; i++)
        cout << i << " ";
    }
  }
  cout << endl;
}

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
}
