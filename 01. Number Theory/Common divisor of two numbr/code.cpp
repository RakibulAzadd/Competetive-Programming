#include <bits/stdc++.h>
using namespace std;
const int mx= 1e6;
int arr[mx+1];


int commDiv(int a, int b)
{
    // find gcd of a, b
    int n = __gcd(a, b);
 
    // Count divisors of n.
    
    int result = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        // if 'i' is factor of n
        if (n % i == 0) {
            // check if divisors are equal
            if (n / i == i){
                result += 1;
                cout<<i<<" ";
                }
            else{
                result += 2;
                cout<<i << ' '<<n/i<< " ";
                }
        }
    }
    cout<<endl;
    return result;
}
int main()
{
         
        int n, m;
        n=12 ,m=18;


        int ans= commDiv(n,m);
        cout<<ans<<endl;
         
  
        

    return 0;
}
