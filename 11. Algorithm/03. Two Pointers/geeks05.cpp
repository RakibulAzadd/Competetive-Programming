//https://www.geeksforgeeks.org/dsa/find-the-number-of-dominant-pairs/

#include<bits/stdc++.h>
using namespace std;

int dominantPairs(vector<int> &v){
    int n = v.size();
     int left=0, right=n/2;
    int ans=0;
    for(left=0;left<n/2;left++){
        right=n/2;
        while(right<n && v[left]>=5*v[right]){
            right++;
        }
        ans += (right-n/2);
    }

    return ans;
}

int main(){
    vector<int> v = {20,10,8,5,1,1,2,4};
    cout << dominantPairs(v) << endl;
    return 0;
}