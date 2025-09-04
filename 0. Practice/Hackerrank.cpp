#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
const int maxn=1e5+9;
using namespace std;

int mm =10000007;
int mp[maxn];

void solve()
{
    int  a,b,e,f,g,n,m,x,y,z,sum=0,ans=0,co=2,h=60*24,odd=0,even=0,mx=0,mn=mm;
    vector<string>v(9);
    for(int i=0;i<9;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(v[i][j]=='#')
            {
                for(int l=i;l<9;l++)
                {
                    for(int k=j+1;k<9;k++)
                    {

                    }
                }
            }
        }
    }

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
}
