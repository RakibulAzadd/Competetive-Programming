#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> arr){

    int n=arr.size();

    int Curmax=arr[0];
    int Curmin=arr[0];
    int  maxP=0;

    for(int i=1;i<n;i++){
        int temp=max({arr[i],arr[i]*Curmax, arr[i]*Curmin});
        Curmin= min({arr[i],arr[i]*Curmax, arr[i]*Curmin});

        Curmax=temp;

        maxP=max(maxP,Curmax);
    }
  return maxP;
}


int main() {
    vector<int> arr = { -2, 6, -3, -10, 0, 2 };
    cout << maxProduct(arr);
    return 0;
}