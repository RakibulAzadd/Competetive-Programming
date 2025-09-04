// https://www.geeksforgeeks.org/dsa/minimum-characters-added-front-make-string-palindrome/


#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s , int low, int high){
    while(low<high){
        if(s[low]==s[high]){
            low++;
            high--;
        }
        else return false;
    }

    return true;
}
int MinCharAdd(string s){
    int i=s.size()-1;
    int cnt=0;

    while(i>=0 && !palindrome(s,0,i)){
        i--;
        cnt++;
    }

    return cnt;
}

int main(){
    string s= "aacaabbaa";

    int ans = MinCharAdd(s);

    cout<<ans<<endl;
}