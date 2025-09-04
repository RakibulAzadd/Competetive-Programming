#include<bits/stdc++.h>
using namespace std;

int maxWater(vector<int> &v){
    int n=v.size();

    int left[n],right[n];
    
    left[0]=v[0];
    for(int i=1;i<n;i++){
      left[i]=max(left[i-1],v[i]);
    }

    right[n-1]=v[n-1];

    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],v[i]);
    }

    int ans=0;

    for(int i=1;i<n-1;i++){
        int minOfWall= min(left[i],right[i]);
    
        ans += (minOfWall-v[i]);
    }
    
return ans;
} 


int main() {
    vector<int> arr = { 2, 1, 5, 3, 1, 0, 4 };
    cout << maxWater(arr);
    return 0;
}