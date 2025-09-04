// https://www.geeksforgeeks.org/dsa/reverse-string-preserving-space-positions/

#include <bits/stdc++.h>
using namespace std;
string ReverseString(string s)
{
    int n = s.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] == ' ')
        {
            i++;
        }
        else if (s[j] == ' ')
        {
            j--;
        }
        else
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    return s;
}
int main()
{
    string s;
    s = "internship at geeks for geeks";

    string ans = ReverseString(s);
    cout << ans << endl;
}