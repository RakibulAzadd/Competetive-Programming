#include<bits/stdc++.h>
using namespace std;
int h[26];
int main()
 {
    string s="decimal",t="medical";

    for(int i=0;s[i];i++){
        h[s[i]-97]++; 
    }
    for(int i=0;t[i];i++){
        h[t[i]-97]--; 
    }
    for(int i=0;i<26;i++){
        if(h[i]!=0) {
            cout<< "Not Anagrams"<<endl;
            return 0;
        }
         
    }
    cout<< "Anagrams"<<endl;
    return 0;
 }