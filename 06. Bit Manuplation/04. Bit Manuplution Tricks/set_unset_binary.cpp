#include <bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        // cout<< ((num>>i))<<" = "<<i<<endl;
        cout << ((num >> i) & 1);
    }
    cout<<endl;
}
int main()
{
     int a =59;
     printBinary(a);
     int i=4;
     // 0 theke 4th bit unset LSB unset
     int b= (a & (~((1<<(i+1))-1)));
     printBinary(b);
 

   // third bit er por theke unset MSB unset
     i=3;
     int c=(a & (((1<<(i+1))-1)));
     printBinary(c);
  
   return 0;

}
 