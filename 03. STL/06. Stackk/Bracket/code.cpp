#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.size();i++)
      {
        if(!st.empty() && st.top()=='(' && s[i]==')')
          {
            st.pop();

          }
        else {
            st.push(s[i]);
        }

    
      }

    
  if(st.empty()) {
    cout<< "Valid Bracket" <<endl;
  }
  else cout<< "NOt "<<endl;

  return 0;
}