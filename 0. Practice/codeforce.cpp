#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
int maxn=1;
#define mx 40000001
using namespace std;


void solve()
{
    int a,b,c,x=26,y=0,z,sum=0,ans=1,odd=0,even=0,res,zero=0,one=mod,mid;

    
    string s;
    cin>>s;
  
      if(s[0]=='<' && s[s.size()-1]=='>') 
       {
        for(int i=1;i<s.size()-1;i++)
           {
            if(s[i]!= '=') 
             {
              cout<<"NO"<<endl;
              return;
            }
           }
            cout<<"YES"<<endl;
            return;
       }
      
   cout<<"NO"<<endl;
       
     
  

    
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    t = 1;
    //  cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
