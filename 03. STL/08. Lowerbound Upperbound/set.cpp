#include<bits/stdc++.h>
using namespace std;
int main()
  {
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++)
     { int x;
        cin>>x;
        s.insert(x);
     }
    for(auto & i : s)
      {
        cout<< i<<" ";
      }
      cout<<endl;
     auto it = s.lower_bound(5);
       if(it == s.end()) {
        cout<< "Not Found " <<endl;
        return 0;
       }
      cout<<"lower_bound = "<< (*it) <<endl;

      auto it1 = s.upper_bound(7);
       if(it1 == s.end()) {
        cout<< "Not Found " <<endl;
        return 0;
       }
      cout<<"upper_bound = "<< (*it1) <<endl;

      return 0;

  }

  /* 
   as well as map,pair use this type ;
  
  input : 6
4 5 5 25 7 8

output : 
    4 5 5 7 8 25 
lower_bound = 5
upper_bound = 8
 */