#include <iostream>
#include <string>

using namespace std;

bool isValidSubstring(const string& s, int len) {
    int n = s.length();
    for (int i = 0; i < len; ++i) {
        char expected_char = s[i];
        for (int j = i; j < n; j += len) {
            if (s[j] != expected_char) {
                if (i != 0) return false; // More than one different character
                expected_char = s[j];
            }
        }
    }
    return true;
}

int shortestSubstring(const string& s) {
    int n = s.length();
    for (int len = 1; len <= n; ++len) {
        if (n % len == 0 && isValidSubstring(s, len)) {
            return len;
        }
    }
    return n; // If no valid substring is found, return the length of the string itself
}

int main() {
    int t;
    cin>>t;
    while(t--){
    string s;
   int a;
   cin>>a;
    cin >> s;
    cout  << shortestSubstring(s) << endl;
    }
    return 0;
}
