#include<bits/stdc++.h>
using namespace std;
void printVec(vector<pair<int,int> > &v)
  {  
    cout<<v.size()<<endl;
     for(auto i : v)
       {
        cout<< i.first << " " <<i.second<<endl;
       }
       
  }

int main()
  {
   vector< pair<int , int> > v= {{1,2},{3,2},{3,5}};
    
     printVec(v);
     int n ;
     cin>>n;
     for(int i=0;i<n;i++)
       {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
       }
       printVec(v);


     return 0;
  }

  /* output : 
      3
6 7 5 
4
6 7 5 2 
5
6 7 5 2 2
   */