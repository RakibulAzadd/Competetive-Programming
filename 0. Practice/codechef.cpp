#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
const int maxn=1e5+9;
using namespace std;

int mm=1000000000007;


void solve()
{
    int a,b,c,x=0,y,z,sum=0,sm=0,ans=0,odd=0,even=0,res,zero=0,one=0;
    cin>>a;
    vector<int>v(a);
    for(int i=0; i<a; i++) cin>>v[i];
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>one;
        if(one>0)
        sm+=one;
    }
    sum=0;
    for(int i=0; i<a; i++)
    {
        sum= max(sum+v[i],v[i]);
        ans=max(ans,sum);
    }
    sum=0;
    for(int i=0; i<a; i++)
    {
        sum+= v[i];
        ans=max(ans,sum+sm);
    }
    sum=0;
    for(int i=a-1; i>=0; i--)
    {
        sum+=  v[i];
        ans=max(ans,sum+sm);
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
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
