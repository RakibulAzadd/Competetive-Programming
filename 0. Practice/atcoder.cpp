#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
const int mx = 2e5 + 5;
const int pr = 5e6 + 5;
using namespace std;

int mm = 1000000000007;
 int dp[2000005][2];
 

void solve()
{
   int n,a,b;
   cin>>n;
   map<int,pair<int,int> >mp;
   int tr=0,sf=0;
   vector<int>vv,vs,v;
   for(int i=0;i<n;i++){
    cin>>a;
    tr+=a;
    vv.push_back(a);
   }
   for(int i=0;i<n;i++){
    cin>>b;
    sf+=b;
    vs.push_back(b);
   }
   for(int i=0;i<n;i++) {
  
    v.push_back(vs[i]+vv[i]);
     mp.insert({v[i],{vv[i],vs[i]}});

   }
 sort(v.begin(),v.end(),greater<int> ());
 int ans=v[0],al=0;
 for(int i=1;i<v.size();i++){
     al+=mp[v[i-1]].first;
    //cout<<ans<<endl;
   // cout<<al<<endl;
     ans=max(ans,(al+v[i]));

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

  //cin >> t;

  while (t--)
  {
    solve();
  }
  return 0;
}
