#include <bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        // cout<< ((num>>i))<<" = "<<i<<endl;
        cout << ((num >> i) & 1);
    }
}
int main()
{
     
  int a=9;
   //  a>>1 == a/2 
    cout<< (a>>1)<<endl;
  // a<<1 = a*2; 
    cout<< (a<<1)<<endl;
   
   return 0;

}
 