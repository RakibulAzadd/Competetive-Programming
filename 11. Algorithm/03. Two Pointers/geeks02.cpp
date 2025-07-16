// GeeksForGeeks problem Link : https://www.geeksforgeeks.org/dsa/move-zeroes-end-array/

#include<bits/stdc++.h>
using namespace std;
vector<int> EndOfZero(vector<int> &v){
    int n = v.size();
    int i = 0, j = n-1;
    while(i<j){
        if(v[i] == 0 && v[j] != 0){
            swap(v[i], v[j]);
            i++;
            j--;
        }
        else if(v[j]==0){
            j--;
        }
        else if(v[i] !=0){
            i++;
        }
    }
   return v;
}
int main(){
    vector<int> v={1, 2, 0, 4, 3, 0, 5, 0};

    vector<int> ans = EndOfZero(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}