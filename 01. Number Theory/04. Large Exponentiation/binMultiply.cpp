#include <bits/stdc++.h>
using namespace std;

const long long int  M = 1e18 + 7;


int binMultiply(long long a,long long b){
    long long ans=0;
    while(b>0){
        if(b&1){
            ans= (ans+a)%M;
        }
        a = (a+a)% M;
        b>>= 1;
    }
    return ans;
}

 // if  a<= 10^18    a<=2^1024
int binExpIta(long long a, long long b)
{
    long long ans = 1;
    while (b>0)
    {
        if (b & 1)
        {
            ans = binMultiply(ans,a);
        }
        a = binMultiply(a,a);
        b >>= 1;
    }
    return ans;
}

 

int main()
{
    int a = 2, b = 40;
   
    cout << binExpIta(a, b);

    return 0;
}