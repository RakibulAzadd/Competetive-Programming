#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;
    return sum(n - 1) + n;
}

int main()
{
    int r = sum(5);
    printf("%d ", r);
    return 0;
}

// ouput : 15 