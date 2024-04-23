#include<bits/stdc++.h>
using namespace std;


int sumOfArray(int price[] , int n){
     int sum=0;
     for(int i=0;i<n;i++){
        sum+= price[i];
     }
     return sum;
 }
 
  int main(){
        int n;
        cin>>n;
        int  price[n];
        for(int i=0;i<n;i++) cin>>price[i];

       cout<< sumOfArray(price,n);
  }