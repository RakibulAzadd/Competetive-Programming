/* Given array a of n integers. All integers are present
int even count except one . Find that one integer which has odd count
in 0(N) time complexity and 0(1) space;
N<10^5
a[i] < 10^5
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    int ans=0;
    for(int i=0;i<n;i++)
     {
        cin>>x;
        ans^=x;
        cout<<ans<< endl;
     }
  cout<<endl;
}
/* input  : 9
2 4 6 7 7 4 2 2 2
output : 
2
6
0
7
0
4
6
4
6
 */