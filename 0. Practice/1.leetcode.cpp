#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int singleNonDuplicate(vector<int> &nums)
{
  int a = nums.size();

  int l = 0, h = a - 1;
  while (l <= h)
  {
    int mid = l + (h - l) / 2;
    //  cout<<mid<< endl;
    bool isEven;
    if ((h - mid) % 2 == 0)
      isEven = true;
    else
      isEven = false;

    if (nums[mid] == nums[mid + 1])
    {
      if (isEven)
      {
        l = mid + 2;
      }
      else
        h = mid - 1;
    }
    else
    {
      if (isEven)
      {
        h = mid;
      }
      else
        l = mid + 1;
    }
  }
  return nums[h];
}

int main()
{
  int n, target;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  int ans = singleNonDuplicate(v);
  cout << ans << endl;
}