#include<bits/stdc++.h>
using namespace std;
int missingNum(vector<int> v){
    int n=v.size();
    int xor1=0,xor2=0;
    for(int i=0;i<n;i++){
        xor1^=v[i];
    }
    for(int i=1;i<=n+1;i++){
        xor2^=i;
    }

    return xor1^xor2;
}


int main(){
  vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
    int res = missingNum(arr);  
    cout << res << endl;  
    return 0;
}