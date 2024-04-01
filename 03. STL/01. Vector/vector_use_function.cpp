#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v)
  {  
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
       {
        cout<< v[i]<< " ";

       }
       v.push_back(2);
       cout<<endl;
  }

int main()
  {
    vector<int> v;
     v.push_back(6);
     v.push_back(7);
     vector<int> v2=v;
     v2.push_back(5);
     printVec(v);
     printVec(v);
     printVec(v2);


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