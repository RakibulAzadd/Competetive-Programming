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
      int n,k,q;
      cin>>n>>k>>q;
      vector<int>point(k),time(k);
      for(int i=0;i<k;i++){
          cin>>point[i];
      }
        for(int i=0;i<k;i++){
          cin>>time[i];
      }
      map<int,int>mp;
      for(int i=0;i<k;i++){
        mp[point[i]]=time[i];
      }
      map<int,double>veg;
      int age=0,tm=0;
      for(int i=0;i<k;i++){
        double a= (point[i]-age)/(double)(time[i]-tm);

        veg.insert({point[i],a});
        age=point[i];
        tm=time[i];
      }

      while(q--){
        int task;
        cin>>task;
        int s= *lower_bound(point.begin(),point.end(),task);
       // cout<<s<<endl;
        double sp=veg[s];
          
        int ex= s-task;
        double mi= ex/sp;
        int ans= mp[s]-mi;
        cout<< ans<<" ";

      }
      cout<<endl;

    


          
   
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
