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
   
   if(a & (a-1)) {
    cout<< " Not power of 2 "<<endl;
   }
   else {
    cout<< "   power of 2"<<endl;
   }
   
   return 0;

}
 