#include<bits/stdc++.h>
using namespace std;

const int N= 1e7 + 10;
vector< bool > isPrime(N,1);
vector< int> lp(N,0);
vector<int> hp(N,0);

void LP_HP_prime(){
       isPrime[0]=isPrime[1]= false;
       for(int i=2;i<N ;++i){
        if(isPrime[i] == true){
            lp[i]= hp[i]=i;
             for(int j=2*i ;j<N;j+=i){
                isPrime[j]=false;
                hp[j]=i;
                if(lp[j]==0){
                    lp[j]=i;
                }
             }
        }
       }
    
}
int main(){
     LP_HP_prime();
     
     for(int i=1;i<=20;i++){
        cout<< lp[i] << " "<<hp[i]<<endl;
     }

    
    
}