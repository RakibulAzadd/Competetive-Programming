#include<bits/stdc++.h>
using namespace std;
int main()
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     {
        cin>>arr[i];
     }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
      {
        cout<< arr[i]<<" ";
      }
      cout<<endl;
      int *ptr= lower_bound(arr,arr+n,5);
       if(ptr == (arr+n))
         {
            cout<< "Not found "<<endl;
         }
      cout<<"lower_bound = "<<  (*ptr)<<endl;
         
      int *pt=upper_bound(arr,arr+n,7);
      if(ptr == (arr+n))
         {
            cout<< "Not found "<<endl;
         }
      cout<< "upper_bound = "<< (*pt)<<endl;
   
      
      int ans=*lower_bound(arr,arr+n,6);
      cout<<ans<<endl;
      return 0;

  }

  /* input : 6
4 5 5 25 7 8

output : 
    4 5 5 7 8 25 
lower_bound = 5
upper_bound = 8
 */