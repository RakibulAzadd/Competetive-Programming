 #include<bits/stdc++.h>
using namespace std;
 
int main()
{
   vector<int> v= { 1, 2, 3 };
 
    sort(v.begin(), v.end());
    reverse(v.begin(),v.end());
 
    cout << "The 3! possible permutations with 3 elements:\n";
    do {
        cout << v[0] << " " << v[1] << " " << v[2] << "\n";
    } while (prev_permutation(v.begin(), v.end()));
 
    cout << "After loop: " <<v[0] << ' '
         << v[1] << ' ' << v[2] << '\n';
 
    return 0;
}