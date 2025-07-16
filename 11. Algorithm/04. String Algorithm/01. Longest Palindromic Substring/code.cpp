//https://www.geeksforgeeks.org/dsa/longest-palindromic-substring/

// Better Approach for the start center like as Ulta two pointer 
// Time Limit O(n^2) Space O(1)


#include<bits/stdc++.h>
using namespace std;

string  MaxSubPalindrome(string s){
    int n= s.size();
    if(n==0)return "";
    int start=0,maxlen=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<=1;j++){
            int low=i;
            int high=i+j;

            while(low>=0 && high<n && s[low]==s[high]){
                int curlen= high-low+1;
                if(curlen>maxlen){
                    start=low;
                    maxlen=curlen;
                }
                low--;
                high++;
            }

        }
    }
    return s.substr(start,maxlen);
}

int main(){
   string s = "forgeeksskeegfor";
   string ans= MaxSubPalindrome(s);

   cout<<ans<<endl;
}

