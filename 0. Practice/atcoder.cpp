#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
const int mx = 2e5 + 5;
const int pr = 5e6 + 5;
using namespace std;

int mm = 1000000000007;
int prime[pr];

int arr[mx], ps[pr];
int gcd(int a, int b) 
         {
          int g=__gcd(a,b);
          return g;
         }
void sieve()
{
  prime[0] = prime[1] = 1;
  for (int p = 2; p * p < pr; p++)
  {

    if (prime[p] == 0)
    {

      for (int i = p * p; i < pr; i += p)
        prime[i] = 1;
    }
  }

  cout<<prime[883]<<endl;
  for (int i = 2; i < pr; i++)
  {
    if (prime[i] == 0)
    {

      ps[i] = ps[i - 1] + 1;
    }
    else
      ps[i] = ps[i - 1];
  }
}

void sumOfDigits()
{

  for (int i = 1; i < mx; i++)
  {
    int sum = 0;
    int N = i;
    while (N != 0)
    {
      sum += N % 10;
      N /= 10;
    }
    arr[i] = arr[i - 1] + sum;
  }
  // Return the sum
}

void solve()
{
  int n, m, a, b, c, x = 0, y = 0, z, sum = 0, ans = 0, odd = 0, even = 0, res, zero = 0, one = 0;
  cin>>a>>b>>n;
  set<int>st;
  int a1=a,b1=b;
  while(a<=n) {
    if(n%a==0) 
    {
      x++;
    }
    else break;
   a*=a1;
  }
  while(b<=n)
  {
     if(n%b==0) 
    {
      y++;
    }
    else break;
   b*=b1;
  }

  for(int i=0;i<=x;i++)
   {
    for(int j=0;j<=y;j++)
     { 
      long long g=pow(a1,i)*pow(b1,j);
       if(n%g==0 && g<=n)
       { 
        st.insert(n/g);
       }
     }
   }
 cout<<st.size()<<endl;
 return ;
   
}
int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
   //sieve();
  //  sumOfDigits();

  int t;
  t = 1;

  cin >> t;

  while (t--)
  {
    solve();
  }
  return 0;
}
