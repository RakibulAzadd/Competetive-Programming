#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long int
#define endl '\n'
using namespace std;
const int N = 1e5 + 3;
int par[N];
int sz[N];
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
	    sz[i]=1;
	}
	while(m--)
	{
		cin >> x >> y;
		x = find(x);
		y = find(y);
		if (x == y)
			ans++;
		else
		{
		   if(sz[x]<sz[y]) swap(x,y);
			par[y] = x;
		    sz[x]+=sz[y];
		}
	}
	cout << ans << endl;
}
