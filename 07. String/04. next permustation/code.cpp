 #include<bits/stdc++.h>
using namespace std;
 
int main()
{
   string v="zbba";
 
    sort(v.begin(), v.end());
 
   // cout << "The 3! possible permutations with 3 elements:\n";
    do {
       
         cout<< v<<endl;
    } while (next_permutation(v.begin(), v.end()));
 
    
 
    return 0;
}