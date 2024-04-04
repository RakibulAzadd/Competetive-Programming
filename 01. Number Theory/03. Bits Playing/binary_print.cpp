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
    printBinary(9);
    int a = 9;
     cout<<endl;
    for (int i = 0; i < a; i++)
    {
        if ((a & (1 << i)) != 0)
        {
            cout << "set bit" << endl;
        }
        else
            cout << "not set bit" << endl;
    }

    int position=1;
    //bit set
    printBinary(a | (1<<position));
   cout<<endl;
    
    //tilda invert kore 
    cout<<"tilda invert = ";
    printBinary(~a); cout<<endl;

    // third bit unset
    cout<<"third bit unset = ";
     printBinary(1<<3);cout<<endl;
     printBinary(~(1<<3));cout<<endl;

   // unset
   position=3; cout<< "unset 3th = ";
   printBinary(a& (~(1<<position)));cout<<endl;
   
   //toggle means not operator
   position=2; cout<< "toggle= ";
   printBinary(a^(1<<position));cout<< endl;
  
  // bit count 
   int ct=0;
   for(int i=31;i>=0;i--){
    if((a& (1<<i)) !=0){
        ct++;
    }
   }
   cout<< "total bit count = " <<ct<<endl;
   cout<< "total bit count = " <<__builtin_popcount(a)<<endl;


}