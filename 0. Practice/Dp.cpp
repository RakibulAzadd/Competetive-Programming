#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+10;
int h[N];
int dp[N];
int n,sum=0;

int func(int i){
    if(i<0) return 0;
    if(i==0) return 1;
    if(dp[i]!= -1)return dp[i];
     
     int one = func(i-1) ;
     cout<<" i-1 " << i-1<<" one = " << one<< endl;
      int two = func(i-2);
       cout<<" i-2 " << i-2<<" two = " << two<< endl;

     
     return dp[i]= one+two;


}

int main(){
    memset(dp,-1,sizeof(dp));
     
    cin>>n;
    
    cout<<func(n);
}