#include <bits/stdc++.h>
using namespace std;
 
void Divisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal,
            // count only one
            if (n / i == i)
            {
                cout << i << " ";
                 
            }

            else // Otherwise count both
            {
                cout << i << " " << n / i << " ";
                
            }
        }
    }
    
}
int main()
{
     
        int n, m;
        cin >> n;
        Divisors(n);
         
    

    return 0;
}
