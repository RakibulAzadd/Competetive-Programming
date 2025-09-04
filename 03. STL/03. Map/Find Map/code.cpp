#include<bits/stdc++.h>
using namespace std;
void printM(map<int,string > &m)
   {
       cout<< m.size()<<endl;
       for(auto &i : m)
         {
            cout<< i.first<< " " <<i.second<<endl;
         }
        
   }
int main()
  {
    map<int,string> m ;
    m[1] = "abc";
    m[5]= "cdc";
    m[3]= "rakib";
    m[6]= "a";
    auto it = m.find(3);
    if(it == m.end())
      {
        cout<< "NO Value"<<endl;
      }
    else 
      {
        cout<< (*it).first << " "<< (*it).second<<endl;
      }
      printM(m);

  }