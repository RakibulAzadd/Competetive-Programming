#include<bits/stdc++.h>
using namespace std;
int gcd(int a , int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    cout<<"GCD = " << gcd(12,4)<<endl;
    cout<<"GCD = " << gcd(18,12)<<endl;
    cout<<"GCD = " << gcd(12,18)<<endl;
    cout<<"LCM = " << 12*18/ gcd(12,18)<<endl;

    cout<< __gcd(12,18) << endl;
    return 0;
}