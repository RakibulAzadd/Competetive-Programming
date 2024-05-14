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
  int n, m, a, b, c,d, x = 0, y = 0, z, sum = 0, ans = 0, odd = 0, even = 0, res, zero = 0, one = 0;
   cin>>a>>b>>c>>d;
   if(a>b){
    x=b;
    y=a;
   }
   else {
    x=a;
    y=b;
   }
   bool ok1=false,ok2=false;
   for(int i=x;i<=y;i++){
    if(i==c)
    ok1=true;
    if(i==d)ok2=true;

   }
   if((ok1&&ok2) || (!ok1 && !ok2)){
    cout<<"NO"<<endl;

   }

  else {
    cout<< "YES"<<endl;
  }

   
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
