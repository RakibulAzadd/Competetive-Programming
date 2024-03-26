
#include <bits/stdc++.h>
using namespace std;

void sivprime(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;


        if (arr[m] == x)
            return m;


        if (arr[m] < x)
            l = m + 1;


        else
            r = m - 1;
    }

    return -1;
}
int main()
{
    int n = 30;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    sivprime(n);
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int l = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, l - 1, x);
    (result == -1)
    ? cout << "Element is not present in array"
           : cout << "Element is present at index " << result;
    return 0;
}
