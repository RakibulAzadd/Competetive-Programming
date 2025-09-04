#include<bits/stdc++.h>
using namespace std;
int main(){

     /* XOR Operator : 
        0 ^ X = X 
        X ^ X = 0
      */
    int a =4, b=6;
    a= a^b;
    b= b^a; // b --> a
    //b= b^ a^ b; b= b^ b ^ a; b= 0^a ; b= a;

   a= a^ b; // a -- > b;
   // a=a^b ; a= (a^b) ^ a ; a= a^ a ^ b ; a= b;

   cout<< a << " " << b<<endl;
}