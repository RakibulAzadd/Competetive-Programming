#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;


    // cout<<n<< ' ';
    //cout<<n-2 << " "<<n-1<< " "<<endl;
    return fib(n - 2) + fib(n - 1);
      cout<<n-2 << " "<<n-1<< " "<<endl;
    
}
int main()
{
    int n = fib(10);
    cout << n << endl;
    return 0;
}