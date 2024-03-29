#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
int MX = 1;
#define mx 40000001
using namespace std;
const int N=1e5+10;
vector<int>dd;
 void divisor(int n)
   {
    for(int i=1;i<sqrt(n);i++)
        {
          if(n%i==i) 
            {
              dd.push_back(i);
              return;
            }
          if(n%i==0)
            {
              dd.push_back(i);
              dd.push_back(n/i);
            }
           
        }
   }
   bool eqlString(string a, string b)
      {
        int sum=0;
        for(int i=0;i<a.length();i++)
         {
          if(a[i]!=b[i]) sum++;
         }
         if(sum>1) return false;
         return true;
      }

void solve()
{
    int a, b, c, x = 0, y = 0, z, sum = 0, ans = 1, odd = 0, even = 0, res, zero = 0, one = mod, mid;
    int n;
    dd.clear();
    cin>>n;
    divisor(n);
    sort(dd.begin(),dd.end());
    string s;
    cin>>s;
    for(auto ll : dd)
      {
              string s1= s.substr(0,ll);
              string s2= s.substr(n-ll);
              
              string t1="",t2="";
              for(int i=0;i<n/ll;i++)
               {
                t1+= s1;
                t2+=s2;
               }
              if(eqlString(t1,s) == true || eqlString(t2,s)==true)
                {
                        cout<<ll<<endl;
                        return;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
