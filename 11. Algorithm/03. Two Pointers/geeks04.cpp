// https://www.geeksforgeeks.org/dsa/2-sum-pair-sum-closest-to-target/

#include<bits/stdc++.h>
using namespace std;
pair<int,int> ClosestToTarget(vector<int> &arr, int target){
    int n = arr.size();
    int i = 0, j = n - 1,min_diff= INT_MAX;
    pair<int,int> res = {-1, -1}; // Initialize result pair to -1, -1
    sort(arr.begin(), arr.end()); // Sort the array first
    while(i<j){
        int sum= arr[i] + arr[j];
        int diff = abs(sum-target);
        if(diff<min_diff){
            min_diff = diff;
            res= {arr[i], arr[j]};
        }
        else if(sum<target){
            i++;
        }
        else {
            j--;
        }
    }
    return res; // Return -1, -1 if no such pair exists
}

int main(){

    vector<int> arr = {5, 2, 7, 1, 4};
    int target = 10;

    pair<int,int>ans=ClosestToTarget(arr,target);

    if(ans.first == -1 && ans.second == -1){
        cout << "No such pair exists" << endl;
    }
    else {
        cout << "Pair with given sum " << target << " is: (" << ans.first << ", " << ans.second << ")" << endl;
    }
    
}