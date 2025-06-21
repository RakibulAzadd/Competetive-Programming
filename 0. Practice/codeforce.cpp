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
  int n, x;
  cin >> n >> x;

  if (n == 1)
  {
    cout << x << endl;
    return;
  }
  vector<int> ans;
  int value = 0;
  int a = 0;
  for (int i = 0; i < n - 1;)
  {
    if (value > x)
      value = 0;
    if ((x | value) == x)
    {
      a |= value;
      ans.push_back(value);
      i++;
    }
    value++;
  }
  int b = ans[ans.size() - 1] + 1;
  
  if ((a | b) == x)
  {  
    ans.push_back(b);
  }
  else if(b>x){
    ans.push_back(0);
  }
  else
  {
      ans.push_back(x);
  }
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
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
