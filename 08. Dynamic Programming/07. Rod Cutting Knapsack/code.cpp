#include<bits/stdc++.h>
using namespace std;
const int N =1e5+10;
int dp[1005];
   int func(int len, vector<int>& prices){
    if(len==0) return 0;
    if(dp[len] != -1) return dp[len];
    int ans=0;
    for(int lenCut=1;lenCut<=prices.size();lenCut++)
      {
         if(len-lenCut>=0) {
            ans= max(ans,func(len-lenCut,prices)+ prices[lenCut-1]);
         }
      }
      return dp[len]=ans;

   }

 int cutRod(int price[] , int n){
    memset(dp,-1,sizeof(dp));
     vector<int> prices(price,price+n);
   return func(n,prices);
 }
 
  int main(){
        int n;
        cin>>n;
        int  price[n];
        for(int i=0;i<n;i++) cin>>price[i];

       cout<< cutRod(price,n);
  }