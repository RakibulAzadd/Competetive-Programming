#include<bits/stdc++.h>
using namespace std;

const int N= 1e7 + 10;
vector< bool > isPrime(N,1);
void sieve(){
       isPrime[0]=isPrime[1]= false;
       for(int i=2;i<N ;++i){
        if(isPrime[i] == true){
             for(int j=2*i ;j<N;j+=i){
                isPrime[j]=false;
             }
        }
       }
    for(int i=1;i<100;++i){
        cout<< isPrime[i] << " ";
    }
    cout<<endl;
}
int main(){
     sieve();

     int t;
     cin>>t;
     while(t--){
        int x;
        cin>>x;
        if(isPrime[x]){
            cout<< "Prime"<<endl;
        }
        else {
            cout<< "Not Prime" <<endl;
        }

     }
    
}