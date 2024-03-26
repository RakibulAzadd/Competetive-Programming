#include <bits/stdc++.h>
using namespace std;
 
int main()
{ 
  int a,x;
  cin >> a;

  map<int, int> mp;
 // map<int, int>::iterator it;
   for(int i=0;i<a;i++)
    {
      cin>>x;
      mp[x]++;
    } 
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
      cout<< (*it).first << " ^ "<< (*it).second<<endl;
    }

    return 0;
}
/*
input:
  2 2 2 2 5 5 5 3 3 3 3
output: 
5 ^ 3
3 ^ 4
2 ^ 4

*/