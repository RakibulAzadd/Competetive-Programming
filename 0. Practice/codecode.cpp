#include <bits/stdc++.h>
 
#define mod 1000000007
#define int long long
#define endl '\n'
const int mn = 1e5 + 9;
using namespace std;
const int INF = 1e9 + 10;
const int mm = 2e5 + 10;
bool ok =false;
   vector<int>v;
   void tour(){
    v.push_back(1);
    for(int i=1;i<100000;i++){
        int x=v[i-1]+i;
      
        v.push_back(x);
      
    }
   }

void solve()
{
   int l,k;
   cin>>l>>k;
   //for(int i=0;i<10;i++) cout<< i << " = "<<v[i]<<endl;
   int low=0,high=v.size()-1;
   int ans=0;
   k=k-l+1;
   for(int i=0;i<v.size();i++) {
      
    if(v[i]<=k){
      ans=i;
    
    }
    else break;
   }
   
  //  while(low<high){
  //           cout<<high << " .. " << low<<endl;
  //      int mid =  (high-low)/2;
  //      cout<<mid<< " = " <<v[mid] <<endl;
  //    if(v[mid]<=k){
  //      ans=mid;
  //      low=mid+1;
       
  //    }
  //    else if(v[mid]>k) {
  //     high=mid-1;
  //    }
  //  }

   cout<<ans+1<<endl;


    

}

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
   tour();
  int t;
  t = 1;
  cin >> t;
  while (t--)
  {
     
    solve();
  }
}
