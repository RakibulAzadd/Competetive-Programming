 #include<bits/stdc++.h>
using namespace std;
 int minOperations(vector<int>& nums, int k) {
        
        int a= nums.size();
        int ans=0;
        for(int bit=0;bit<=20;bit++){
            int lk=0;
             cout<< bit << " bit = {  "<<endl;
             for(auto i : nums){
                cout<< " 1<< bit  = "<< (1<<bit)<<endl;
                int x = (1<<bit) & i;
                cout<<" x=  i = "<<i<<"  &  "<<  (1<<bit)<<" 1<<bit " << "   x =  "<<x<<endl;
                lk= x^lk;
                cout<<" lk = "<<lk<<endl;
             }
             int ks= (1<<bit) & k;
             if(lk != ks) {
                ans++;
             }
             cout<< "  }                    ses  "<<endl;
        }
     return ans;
    }

    int main(){
    int n,k=1;
   // cin>>n>>k;
     vector<int> v={2,1,3,4};
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }

  int ans= minOperations(v, k);
  cout<<"ans= "<<ans<<endl;

}