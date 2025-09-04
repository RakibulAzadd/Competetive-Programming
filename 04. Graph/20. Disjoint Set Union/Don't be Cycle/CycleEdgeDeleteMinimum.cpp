#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long int
#define endl '\n'
using namespace std;
const int N = 2e5 + 3;
int par[N];

ll find(ll n)
{
	if (n == par[n])
		return n;
	return par[n] = find(par[n]);
}
int main()
{
	ll n, m, x, y, ans = 0;
	cin >> n >> m;
	for (ll i = 1; i <= n; i++)
	{
		par[i] = i;
	 
	}
	for(ll i=0;i<m;i++)
	{
		cin >> x >> y;
		x = find(x);
		y = find(y);
		if (x == y)
			ans++;
		else
		{
		 
			par[y] = x;
		
		}
	}
	cout << ans << endl;
}


/*  Input: 
  
  6 7
1 2
1 3
2 3
4 2
6 5
4 6
4 5 
output: 2*/