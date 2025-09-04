#include<iostream>
using namespace std;
int main()
{

    int i=1,n=100,p=1;
    while(i<=n)
    {
        cout<<i<< " ";
        i+=p;
        p+=2;
    }
   return 0;
}
