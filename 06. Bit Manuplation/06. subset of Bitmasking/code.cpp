#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int subset_ct= (1<<n);
        vector< vector<int > > subsets;
        for(int mask =0;mask<subset_ct; ++mask){
            vector<int>sub;
            for(int i=0;i<n;i++){
                if((mask & (1<<i)) !=0){
                sub.push_back(nums[i]);
               /*  cout<<mask << " &  " << i << " = ";
                 cout<<nums[i] <<endl; */
                }
            }
        subsets.push_back(sub);
        }

        return subsets;
    }

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
     
     auto all_subsets = subsets(v);

     for(auto s : all_subsets) {
        for(int i : s){
            cout<< i<< " ";
        }
        cout<<endl;
     }

}

/* input : 3
         2 4 5

output : 2 
4 
2 4 
5 
2 5 
4 5 
2 4 5 */