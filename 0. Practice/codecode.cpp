#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
const int mn = 1e5 + 9;
using namespace std;
const int INF = 1e9+10;
int mm = 10000007;
int mp[mn];

void solve()
{
  int a = 0, b = 0, c = 0, d = 0, e, f, g, n, x, y, z, sum = 1, ans, co = 2, h = 4, m = INF, w = 0;

  cin >> n >> a >> b;
  vector<int> v(n);
   x = a + b;
   map<int,int>mp;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    y=v[i]%x;
    v[i]=y;
   
  }
 
sort(v.begin(),v.end());
 int ff= m-1;
 int mm=0;
 for(int i=0;i<v.size();i++)
   {
    if(i==n-1) 
    {
           if(a-v[n-1]+v[0]>0)
            {
              cout<< "Yes" <<endl;
              return ;
            }
    }
    else if((v[i+1]-v[i]) > b)  
      {
          cout<< "Yes" <<endl;
          return ;
      }
   }
 cout<< "No" <<endl;
  

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
