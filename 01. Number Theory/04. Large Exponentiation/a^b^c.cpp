#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
 
int binExp(int a, int b , int m)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * 1LL * a) % m;
        }
        a = (a * 1LL * a) % m;
        b >>= 1;
    }
    return ans;
}

int main()
{
    int a = 2, b = 2 , c=2;
    
    cout << binExp(a, binExp(b,c,M-1),M);

    return 0;
}