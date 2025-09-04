#include<bits/stdc++.h>
using namespace std;
int dp[310][10010];
int func(int n,int amount, vector<int> & coins){
    if(amount == 0) return 1;
    if(n <0) return 0;
    if(dp[n][amount] != -1) return dp[n][amount];
    int ways=0;
    for(int  coin_amount =0 ;coin_amount <= amount ; coin_amount+=coins[n]){
          ways+= func(n-1, amount - coin_amount,coins);

    }
    return dp[n][amount] = ways;
}
  int change(int amount, vector<int>& coins) {
     memset(dp,-1,sizeof(dp));
     return func(coins.size()-1,amount,coins);
     
    }

 int main(){
         int  a=100;
         
         vector<int> coins= {1,2,5};
    cout<< change(a,coins)<<endl;
    return 0;
 }