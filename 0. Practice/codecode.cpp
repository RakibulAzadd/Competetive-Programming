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
  string s,ss="";
  cin>>s;
  int  start;
   
  for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        ss+=s[i];
      if(i<s.size()-1 && s[i+1]=='0'){
             
            start=i;
            break;
      }
    }
  }
  
  int ans=0;
  for(int i=start+1;i<s.size();i++){
  //  cout<<i<< " "<< ss<<endl;
    if(s[i]=='1'){
       ss+=s[i];
      //cout<<ss<<endl;
    }
    else if(s[i]=='0' && ss.size()!=0){
        ans+= ss.size()+1;
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
