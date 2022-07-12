#include <bits/stdc++.h>
#define ll long long int
#define Faster                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define ffor(i, a, n) for (int i = a; i < n; i++)
#define T      \
  ll test;     \
  cin >> test; \
  ffor(tt, 1, test + 1)
#define all(v) v.begin(), v.end()
#define setpre(f, n) fixed << setprecision(n) << f
#define MOD 1000000007
using namespace std;
int main()
{
  T
  {
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    int sum = 0;
    ffor(i, 0, n)
    {
      cin >> v[i];
      sum += v[i];
    }

    if (sum < s)
    {
      cout << -1 << endl;
      continue;
    }
    else if (sum == s)
    {
      cout << 0 << endl;
      continue;
    }

    vector<int> l(n);
    vector<int> r(n);
    int one = 1e7;
    ffor(i, 0, n)
    {
      if (one == 1e7)
        l[i] = one;
      else
        l[i] = i - one;
      if (v[i] == 1)
      {
        one = i;
      }
    }
    one = 1e7;
    for (int i = n - 1; i >= 0; i--)
    {
      if (one == 1e7)
        r[i] = one;
      else
      r[i] = one - i;
      if (v[i] == 1)
      {
        one = i;
      }
    }

    

    int i = 0, j = n - 1;
    int ans = 0;
    while (i < j)
    {
      if (sum == s)
        break;

      ans++;
      if (v[i] != v[j])
      {
        sum--;
        if (v[i] == 1)
        {
          i++;
        }
        else
        {
          j--;
        }
      }
      else
      {
        if (v[i] == 1)
          sum--;
        if (r[i] > l[j])
        {
          j--;
        }
        else
        {
          i++;
        }
      }
    }
    if (sum == s)
      cout << ans << endl;
    else
      cout << -1 << endl;
  }
  return 0;
}