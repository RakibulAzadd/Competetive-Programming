#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
int maxn = 1;
#define mx 40000001
using namespace std;

void solve()
{
   int a, b, c, d, x = 0, y = 0, z, sum = 0, ans = 0, odd = 0, even = 0, res, zero = 0, one = 1;
   string s;
   cin>>s;
   string t;
   cin>>t;
    string s1=s.substr(0,3);
   if(s1==t)ans++;
   
   for(int i=t.size();i<s.size();i++)
   {
      s1+=s[i];
      s1.erase(s1.begin());
      if(s1==t) ans++;
   }
   cout<<ans<<endl;

     
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
   return 0;
}