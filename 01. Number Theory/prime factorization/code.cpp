#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
int maxn = 1;
#define mx 40000001
using namespace std;
 
void primeFactors(int n)
{   vector<int>v;
    
    while (n % 2 == 0)
    {
       v.push_back(n);
        n = n/2;
    }
  
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
         
        while (n % i == 0)
        {
            v.push_back(n);
            n = n/i;
        }
    }
 
     
    if (n > 2)
        v.push_back(n);
    cout<<v.size()<<endl;
}
void solve()
{
  int a, b, c, d, x , y = 0, z, sum = 0, ans = 0, odd = 0, even = 0, res, zero = 0, one = 0;
  string s;
  cin>>a;
  primeFactors(a);
   
}
int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  t = 1;
   //cin>>t;
  while (t--)
  {
    solve();
  }
  return 0;
}
