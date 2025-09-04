#include<bits/stdc++.h>
using namespace std;

const int N= 1e5 + 10;
vector<int> divisor[N];


void Divisor(){
    
       for(int i=2;i<N ;++i){
         for(int j=i;j<N;j+=i){
            divisor[j].push_back(i);

         }
       }
    
}
int main(){
     Divisor();
     
     for(int i=1;i<=20;i++){
        for(int d: divisor[i]){
            cout<< d<< " ";
        }
        cout<<endl;
     }

    
    
}