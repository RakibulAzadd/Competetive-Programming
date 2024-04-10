#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
     getline(cin,s);
     cout<<s<<endl;
      //cout<< s.size()<<endl;
     istringstream ss(s);
    string st;
    while(ss>> st) {
        cout<<st<< endl;
    }

    return 0;
}
/* input : My Name is Rakibul Azad 09 

  output : My Name is Rakibul Azad 09 
My
Name
is
Rakibul
Azad
09
 */