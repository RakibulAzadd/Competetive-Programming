//https://www.geeksforgeeks.org/dsa/check-given-string-rotation-palindrome/

#include<bits/stdc++.h>
using namespace std;

bool RotationCharPalindrome(string s){
    int n= s.size();
    vector<int>v(26,0);

    for(int i=0;i<n;i++){
        v[s[i]-'a']++;
    }
     
    int sum=0;

    for(int i=0;i<26;i++){
        if(v[i]%2==1)sum++;
    }

    if(sum>1) return false;
  
    return true;
}
int main(){
    string s="aabbssehyerrl";

    bool ans = RotationCharPalindrome(s);

    cout<<ans<<endl;
}