#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    if (n ==0) return 0;
    

        printf("%d ", n);
    
        fun(n - 1);
    
         
}
int main()
{
    int x = 3;
   int a= fun(x);
    return 0;
}

// output: 3 2 1