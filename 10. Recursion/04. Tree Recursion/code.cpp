#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fun(n - 1);
        cout<<n<<"="<<endl;
        fun(n - 1);
    }
}
int main()
{
    fun(3);
    return 0;
}

//output: 3 2 1 1 2 1 1