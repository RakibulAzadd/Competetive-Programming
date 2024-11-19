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
  string s, st = "", tt = "";
  cin >> s;
  int ans = 0;
  for (int i = s.size() - 1; i >= 0; i--)
  {
    tt.clear();
    if (s[i] == '?')
    {
      s[i] = '9';
      st += s[i];
       
      reverse(st.begin(), st.end());
     
      int num = stoi(st);
      int bit = __builtin_popcount(num);
      char l = '9';
       
      while (l>='0')
      {
        

        st[0] =l;
        int nn = stoi(st);
        cout << st << endl;
          tt = st;
        int b = __builtin_popcount(nn);
        if (b >= bit)
        {
          tt = st;
          bit = b;
        }
      }
    }
    st.clear();
    cout<<tt<<endl;
    st = tt;
    reverse(st.begin(), st.end());
    st += s[i];
  }

  cout << st << endl;
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
