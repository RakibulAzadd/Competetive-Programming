#include <bits/stdc++.h>
using namespace std;

 
vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int mxR = arr[n - 1];
    for(int i=n-1;i>=0;i--){
         if(arr[i]>=mxR){
            result.push_back(arr[i]);
            mxR=arr[i];
         }

    }
    reverse(result.begin(), result.end());

    return result;

}


int main() {
    vector<int> arr = { 16, 17, 4, 3, 5, 2 };
    vector<int> res = leaders(arr);
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}