#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+10;
int h[N];
int dp[N];

int func(int l , int k){
    if(l==0) return 0;
    if(dp[l]!= -1)return dp[l];
     int cost=INT_MAX;
     for(int i=1;i<=k;i++){
    
     if(l-i>=0){
        cost = min(cost,func(l-i,k)+abs(h[l]-h[l-i]));

     }
     }
     return dp[l]=cost;


}

int main(){
    memset(dp,-1,sizeof(dp));
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    cout<<func(n-1,k);
}