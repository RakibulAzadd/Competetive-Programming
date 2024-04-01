#include<bits/stdc++.h>
using namespace std;
int main()
  {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
     {
        cin>>arr[i];
     }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
      {
        cout<< arr[i]<<" ";
      }
      cout<<endl;
     auto it = lower_bound(arr.begin(),arr.end(),5);
       if(it == arr.end()) {
        cout<< "Not Found " <<endl;
        return 0;
       }
      cout<<"lower_bound = "<< (*it) <<endl;

      auto it1 = upper_bound(arr.begin(),arr.end(),5);
       if(it1 == arr.end()) {
        cout<< "Not Found " <<endl;
       }
      cout<<"upper_bound = "<< (*it1) <<endl;

      int f = *upper_bound(arr.begin(),arr.end(),5);
      cout<< "f = "<< f<<endl;

      return 0;

  }

  /* input : 6
4 5 5 25 7 8

output : 
    4 5 5 7 8 25 
lower_bound = 5
upper_bound = 8
 */