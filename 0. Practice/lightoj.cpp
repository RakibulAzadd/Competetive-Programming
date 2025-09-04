#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
int maxn=1;
#define mx 1000001
using namespace std;
int spf[mx];

int mm=100000000000007 ;
int prime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0){
            //cout<< "shf"<<endl;
        return 0;}

    }
    return 1;
}
 vector<int>getvec(int n)
{
     vector<int>v;
    for (int i=1; i<=sqrt(n); i++)
    {

        if (n%i == 0)
        {
               v.push_back(i);
               v.push_back(n/i);

        }
    }
    return v;
}

 void solve()
    {
        int a,b,c,x=26,y=0,z,sum=0,ans=1,odd=0,even=0,res,zero=0,one=0;

        cin>>a>>b;
        if(min(a,b)==1)
        {
            cout<< max(a,b)<<endl;
        }
        else if(min(a,b)==2)
        {
            c=max(a,b);
            if(c%4==1 || c%4==3)  c++;
            else if(c%4==2)
            {
                c+=2;

            }
            cout<<c<<endl;
        }
        else
        {
           cout<< ((a*b)+1)/2<<endl;
        }





    }
    int32_t main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int t,T=1;
        t = 1;
        cin>>t;
        while (t--)
        {
         cout<<"Case "<<T++<<": ";
            solve();

        }
        return 0;
    }
