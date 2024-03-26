#include <bits/stdc++.h>
using namespace std;
const int mx= 1e6;
int arr[mx+1];
int main()
{
         
        int n, m;
        cin >> n;
         
        for(int i=0;i<n;i++)
        {
            cin>>m;
            arr[m]++;
        }
       for(int i=mx;i>0;i--)
       {
          int ans=0;
          for(int j=i;j<=mx;j+=i)
            {
                ans+=arr[j];
            }
            if(ans>=2)
            {
                cout<<i<<endl;
                return 0;
            }
       }

    return 0;
}
