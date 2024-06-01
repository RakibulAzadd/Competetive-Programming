#include<bits/stdc++.h>
using namespace std;
 double findMaxAverage(vector<int>& v, int k) {
        int a = v.size();
        int sum=0;
        for(int i=0;i<k;i++) {
            sum+= v[i];
        }
        int ans= sum;
        for(int i=k;i<a;i++){
            sum-= v[i-k];
            sum+= v[i];
          //  double x= (double)sum/ (double) k;
            ans=max(ans,sum);
         
            
        }
        return ans;
    }
int main(){
     vector<int> arr= {1,12,-5,-6,50,3};
     int k=4;
     double ans= findMaxAverage(arr,k);
     cout<<ans<<endl;
    return 0;
}