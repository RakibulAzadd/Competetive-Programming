#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
int binExpRecur(int a ,int b){
      if(b==0) return 1;
     //   cout<< "a = " << a << " b = "<< b<<endl;
    int res = binExpRecur(a,b/2);
    //  cout<< "res= " << res << " b = "<<b<<endl;
    if(b&1){
         //  cout<< "b = "<< b << " a = "<<a << " return= " << (a*((res*1LL*res)%M))%M <<endl;
        return (a*((res*1LL*res)%M))%M;
    }
   else { 
      //cout<< "b = "<< b  << " return= " << (res*1LL*res)%M <<endl;
    return ((res* 1LL * res))%M;}
}
int binExpIta(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * 1LL * a) % M;
        }
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return ans;
}

int main()
{
    int a = 2123123, b = 21312331;
    cout<<binExpRecur(a,b)<<endl;
    cout << binExpIta(a, b);

    return 0;
}