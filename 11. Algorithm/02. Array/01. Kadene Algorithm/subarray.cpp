#include<bits/stdc++.h>
using namespace std;
vector<int> maxSubarraySum(vector<int>& arr) {
    int maxEnding=arr[0];
    int ans = arr[0];
    int start= 0, end=0;
    for(int i=1;i<arr.size();i++){

        int sum= maxEnding+arr[i];
        if(sum<arr[i]){
            start=i;
            maxEnding=arr[i];
             
        }else{
            maxEnding=sum;
        }


        if(maxEnding>ans){
            ans=maxEnding;
            end=i;
        }
        

    }

    return {start,end};
}
int main(){
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    vector<int>ans= maxSubarraySum(arr); 
    cout<<ans[0]<< " "<<ans[1]<<endl;
    for(int i=ans[0];i<=ans[1];i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}