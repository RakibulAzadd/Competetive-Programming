#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int>& arr) {
    int maxEnding=arr[0];
    int ans = arr[0];

    for(int i=1;i<arr.size();i++){

        maxEnding = max(arr[i],maxEnding+arr[i]);

        ans = max(ans,maxEnding);
    }

    return ans;
}
int main(){
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout << maxSubarraySum(arr); 
    return 0;
}