#include<bits/stdc++.h>
using namespace std;


int main()
  {
    map<pair<string,string>,vector<int> > m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
      {
          string fn,ln;
          int ct;
          cin>>fn>>ln>>ct;
          vector<int>v;
          for(int j=0;j<ct;j++)
           {
            int x;
            cin>> x;
            m[{fn,ln}].push_back(x);
           }
      }

      for(auto &pr : m)
        {
            auto &full_name=pr.first;
            auto &list= pr.second;
            cout<<full_name.first<< " "<< full_name.second<<endl;
            cout<< list.size()<<endl;
            for(auto element : list)
              {
                cout<< element<< " ";
              }
              cout<<endl;
        }
  }

  /* input : 3
a b 4
1 2 3 4
c d 2
2 3
b f 3
4 5 6
output :   a b
4
1 2 3 4 
b f
3
4 5 6 
c d
2
2 3 */