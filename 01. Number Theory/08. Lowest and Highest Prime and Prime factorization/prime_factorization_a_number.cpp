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
     
    int num;
    cin>>num;
    vector<int> prime_factor;
    while(num>1){
        int prime= lp[num];
        while(num%prime==0){
            num/= prime;
            prime_factor.push_back(prime);
        }
    }
    for(int i : prime_factor){
        cout<< i<< " ";
    }
    cout<<endl;

    
    
}