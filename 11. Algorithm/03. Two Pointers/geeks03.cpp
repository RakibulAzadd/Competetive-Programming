// https://www.geeksforgeeks.org/dsa/check-if-pair-with-given-sum-exists-in-array/

#include<bits/stdc++.h>
using namespace std;
pair<int,int> EqualToTarget(vector<int> &arr, int target){
    int n = arr.size();
    int i = 0, j = n - 1;
    sort(arr.begin(), arr.end()); // Sort the array first
    while(i<j){
        int sum= arr[i] + arr[j];
        if(sum==target){
            return {arr[i], arr[j]};
        }
        else if(sum<target){
            i++;
        }
        else {
            j--;
        }
    }
    return {-1, -1}; // Return -1, -1 if no such pair exists
}

int main(){

    vector<int> arr = {0, -1, 2, -3, 1};
    int target = -2;

    pair<int,int>ans=EqualToTarget(arr,target);

    if(ans.first == -1 && ans.second == -1){
        cout << "No such pair exists" << endl;
    }
    else {
        cout << "Pair with given sum " << target << " is: (" << ans.first << ", " << ans.second << ")" << endl;
    }
    
}