#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
int MX = 1;
#define mx 40000001
using namespace std;
const int N=1e5+10;
 void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        //cout<< ((num>>i))<<" = "<<i<<endl;
        cout << ((num >> i) & 1) << " ";
    }
    cout<< endl;
}
void solve()
{
   
   
    int a; 
    cin>>a;
  printBinary(a);

     

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
