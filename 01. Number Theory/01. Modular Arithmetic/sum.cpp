/* Given a number N . Print its factorial Constraints 
1<= N <= 100
 */
#include<bits/stdc++.h>
using namespace std;
const int M = 10;
int main(){
    int n;
    cin>>n;
    long long sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum= (sum+x) % M;
    }
    cout<< sum ;
    return 0;
}