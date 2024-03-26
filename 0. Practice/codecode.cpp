 #include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
const int mn=1e5+9;
using namespace std;

int mm =10000007;
int mp[mn];

void solve()
{
    int a=0,b=0,c=0,d=0,e,f,g,n,x,y,z,sum=1,ans,co=2,h=4,m=0,w=0 ;
    cin>>a;
    vector<int> nums(a);
    
    for(int i=0;i<a;i++)
      {
         cin>>nums[i];
      }
       int target;
       cin>>target;

      
      sort(nums.begin(),nums.end());
     if(nums[0]==target) {
      cout<< 0<< endl;
      return;
     }
   for(int i=1;i<a;i++)
    {
        if(target==nums[i]) 
        {
         cout<< i<<endl; 
         return;
        }
        else if(target>nums[i-1] && target<nums[i])
       {
         cout<<i<<endl;
         return;
       }
    }

    

}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    t = 1;
   // cin>>t;
    while (t--)
    {
        solve();
    }
}


// testcase =1

/* array size = 7
array = 1 7 3 5 6 9 15
 target= 5
 output = 2 */

// Test Case = 2

/*
Array Size = 4
Array = {5, 6, 1, 3}
Target = 2

output = 1 
 */
