#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

ll maxHeight(ll x, ll y) {
    ll low = 1, high = min(x, (ll)2e9); // Setting high to 2e9 since that's a safe upper bound
    ll best = 0;

    while (low <= high) {
        ll mid = (low + high) / 2;
        ll requiredC = (mid * (mid - 1)) / 2;
        
        if (mid <= x && requiredC <= y) {
            best = mid; // mid can be a candidate for the answer
            low = mid + 1; // Try for a larger height
        } else {
            high = mid - 1; // Try for a smaller height
        }
    }

    return best;
}

int main() {
    ll x, y;
    cin >> x >> y;

    cout << maxHeight(x, y) << endl;

    return 0;
}
