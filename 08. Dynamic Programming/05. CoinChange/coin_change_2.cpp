#include<bits/stdc++.h>
using namespace std;
int dp[310][10010];
int func(int ind,int amount, vector<int> & coins){
    if(amount == 0) return 1;
    if(ind <0) return 0;
    if(dp[ind][amount] != -1) return dp[ind][amount];
    int ways=0;
    for(int  coin_amount =0 ;coin_amount <= amount ; coin_amount+=coins[ind]){
          ways+= func(ind-1, amount - coin_amount,coins);

    }
    return dp[ind][amount] = ways;
}
  int change(int amount, vector<int>& coins) {
     memset(dp,-1,sizeof(dp));
     return func(coins.size()-1,amount,coins);
     
    }

 int main(){
         int  a=5;
         
         vector<int> coins= {1,2,5};
    cout<< change(a,coins)<<endl;
    return 0;
 }