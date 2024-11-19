#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;


     cout<<n<< ' ';
    return fib(n - 2) + fib(n - 1);
     //cout<<n-2 << " "<<n-1<< " ";
    
}
int main()
{
    int n = fib(10);
    cout << n << endl;
    return 0;
}