#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
const int mn = 1e5 + 9;
using namespace std;
const int INF = 1e9 + 10;
int mm = 10000007;
int mp[mn];

void solve()
{
  int a;
  cin >> a;
  vector<pair<int, int>> v;
  map<int, int> mp, mp2;
  for (int i = 0; i < a; i++)
  {
    int x, y;
    cin >> x >> y;
    if(mp2[y]==0) mp2[y]=x;
    if (mp2[y] > x)
    {
      mp2[y] = x;
     // cout<<x<< endl;
    }
    v.push_back({y, mp2[y]});
    mp[y]++;
  }
  int mx = 0;
  for (auto i : mp)
  {
    if (i.second > mx)
    {
      mx = i.second;
    }
  }
  vector<int> vv;
  for (auto i : mp)
  {
    if (i.second == mx)
    {
      vv.push_back(i.first);
    }
  }
  int ans = 0;
  for (auto i : vv)
  {
    //cout<<i<< " = "<< mp2[i] <<endl;
    ans = max(ans, mp2[i]);
  }

  cout << ans << endl;
}

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  t = 1;
  // cin>>t;
  while (t--)
  {
    solve();
  }
}
