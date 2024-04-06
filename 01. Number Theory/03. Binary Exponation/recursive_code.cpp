#include<bits/stdc++.h>
using namespace std;

const int M=1e9+7;

int binExpRecur(int a ,int b){
      if(b==0) return 1;
        cout<< "a = " << a << " b = "<< b<<endl;
    int res = binExpRecur(a,b/2);
      cout<< "res= " << res << " b = "<<b<<endl;
    if(b&1){
           cout<< "b = "<< b << " a = "<<a << " return= " << (a*((res*1LL*res)%M))%M <<endl;
        return (a*((res*1LL*res)%M))%M;
    }
   else { 
      cout<< "b = "<< b  << " return= " << (res*1LL*res)%M <<endl;
    return ((res* 1LL * res))%M;}
}

int main(){
    int a =2, b=13;
    cout<< binExpRecur(a,b);

    return 0;
}