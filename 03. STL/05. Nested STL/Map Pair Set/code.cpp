#include<bits/stdc++.h>
using namespace std;
int main()
 {
    map<int,multiset<string> > mp;

    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int a;
        cin>>a;
        mp[a].insert(s);
    }
    auto cu_it= --mp.end();
    while(true)
      {
        auto &student = (*cu_it).second;
        int mark= (*cu_it).first;
        for(auto i : student)
          {
            cout<< i << " " << mark<<endl;
          }
          if(cu_it== mp.begin()) break;
          cu_it--;
    
      }
 }

 /* INput  : 3
Eve 78
Bob 99
Alice 78
OUTput : 
   Bob 99
Alice 78
Eve 78
  */