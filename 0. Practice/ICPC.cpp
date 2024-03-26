#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
const int maxn=1e5+9;
using namespace std;

int mm =10000007;
int mp[maxn];

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1,I=1;
    cin>>T;
    while(T--)
    {


        int a,b,c,x,y,z,sum=0,ans=0,k;
        cin>>a;
        vector<int>v;
        
        for(int i=0; i<a; i++)
        {
            cin>>x>>y;
            if(x<y) swap(x,y);
            v.push_back(x);
            ans+=(y*2);
        }
        sort(v.rbegin(),v.rend());
        ans+= v[0];
        ans+= v[a-1];
        for(int i=0; i<a-1; i++)
        {
            ans+= (v[i]-v[i+1]);
        }
        cout<<ans<<endl;
    }
    return 0;

}
