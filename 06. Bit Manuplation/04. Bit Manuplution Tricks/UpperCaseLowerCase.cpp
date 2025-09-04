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
    // uppercase to lowercase 
    char B = 'B';
    char b= B | ' ';
    cout<<B <<" = " <<b <<endl;

  // lowercase to uppercase 
    char d= 'd';
    char D= (d&'_');
    int a =d&'_';
    cout<<a<<endl;
    cout << D << " = "<< D<<endl;
  
   
   return 0;

}
 