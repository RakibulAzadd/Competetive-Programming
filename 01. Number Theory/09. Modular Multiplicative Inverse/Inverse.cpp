#include<bits/stdc++.h>
using namespace std;

const int M= 1e9 +7;
int binExpIta(int a, int b , int m)
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
int main(){

    cout<<binExpIta(2,M-2,M);
}