#include<bits/stdc++.h>
using namespace std;
 
const int  N= 1e5+10;
   vector<int> searchRange(vector<int>& nums, int target) {
         vector<int> v(2,-1);
         
         int a =nums.size();
         
         int low= 0,high=a-1;
          while(low<=high){
            int mid =low+ (high-low)/2;
            if(nums[mid]==target){
                v[0]=mid;
                high=mid-1;
                cout<< v[0] <<endl;
            }
            else if(nums[mid]>target){
                high=mid-1;
              }
            else {
                low =mid+1;
            }
          }
          low =0 , high=a-1;
           while(low<=high){
            int mid =low+ (high-low)/2;
            if(nums[mid]==target){
                v[1]=mid;
                low=mid+1;
                cout<< v[0] <<endl;
            }
            else if(nums[mid]>target){
                high=mid-1;
              }
            else {
                low =mid+1;
            }
          }
          
       

      return v;
    }

int main(){
    int n,target;
    cin>> n >> target;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> ans= searchRange(v,target);

     for(auto i : ans) cout<< i << " ";

}