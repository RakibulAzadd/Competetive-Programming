#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
//const  int big =1e18;
//const int maxn=1e8;
const int infu=1e9;
//int prime[maxn];
//int ans[maxn];
//int m[2];


int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1,I=1;

    cin>>t;
    while(t--)
    {
        int a,b,d,x,y,z,sum=1,ct=-1,c0=0,c1=0,c2=0,c3=1,ans1=1;
        string s;
        cin>>a;
        cin>>s;
        bool ok1=false,ok=false,okA=false,oka=false;
        for(int i=0;s[i];i++)
        {
            if(s[i]>='0' && s[i]<= '9')
            {
                ok1=true;
            }
            else if(s[i]>= 'a' && s[i] <= 'z' )
            {
                oka=true;
            }
            else if(s[i]>= 'A' && s[i]<= 'Z')
            {
                okA=true;
            }
            else if(s[i]== '@' || s[i]== '&' || s[i] =='*' || s[i]== '#')
            {
                ok=true;
            }
        }
        if(!ok1)
        {
            s.push_back('1');
        }
        if(!oka)
        {
            s.push_back('a');
        }
        if(!okA)
        {
            s.push_back('A');
        }
       if(!ok)
        {
            s.push_back('&');
        }
        x=s.size();
      if(x<7)
        {
            for(int i=0;i<7-x;i++)
            {
                s.push_back('1');
            }
        }









        cout<< "Case #"<<I<< ": "<<s<<endl;
        I++;
    }


        return 0;
    }
