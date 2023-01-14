#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
int maxn=1;
#define mx 40000001
using namespace std;
 
 
 
 
    void solve()
    {
        int a,b,c,d,x=26,y=0,z,sum=0,ans=0,odd=0,even=0,res,zero=0,one=1;
         cin>>a>>b;
       pair<int,int> arr[a];
       for(int i=0;i<a;i++)
       {
        cin>>arr[i].second;
       }
       for(int i=0;i<a;i++)
       {
        cin>>arr[i].first;
       }
       sort(arr,arr+a);
       int i;
     for( i=0;i<a && b>0 ;)
     {
        sum+=b;
        while(arr[i].second<=sum && i<a)
        {
            ++i;
        }
        b-=arr[i].first;
     }
     if(i==a)
     cout<< "YES"<<endl;
     else 
     cout<< "NO"<<endl;

          
        
         
    }
    int32_t main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
         
        int t;
        t = 1;
        cin>>t;
        while (t--)
        {
            solve();
        }
        return 0;
    }
