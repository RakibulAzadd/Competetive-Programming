#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
const int mn = 1e5 + 9;
using namespace std;
const int INF = 1e9 + 10;
const int mm = 2e5 + 10;
int arr[mm];

void solve()
{
  int n, k;
  cin >> n >> k;
  vector<int> v(n), vv;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  int l = 0, r = n - 1;
  while (l < r)
  {
    vv.push_back(v[l]);
    vv.push_back(v[r]);
    l++;
    r--;
  }
   
  if (l == r)
  {
    vv.push_back(v[l]);
  }
   

   for(int i=1;i<=n;i++){
     arr[i]= arr[i-1]+vv[i-1];
     // cout<<arr[i]<<endl;
   }
  int ans = n;
   for(int i=1;i<=n;i++){
   // cout<< arr[i] <<endl;
    if(arr[i]>k) {
     // cout<<arr[i]<< endl;
      ans=i-1;
      break;
    }
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
}
