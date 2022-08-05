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
    int n;
    cin >> n;
    vector<ll> v(n);
    ffor(i, 0, n)
    {
      cin >> v[i];
    }
    vector<ll> a(n);
    ffor(i, 1, n - 1)
    {
      ll m = max(v[i - 1], v[i + 1]);
      a[i] = max(0LL, m - v[i] + 1);
    }
    ll ans = 0;
    for (int i = 1; i < n; i += 2)
    {
      ans += a[i];
    }
    if (n % 2)
    {
      cout << ans << endl;
    }
    else
    {

      // ffor(i, 0, n)
      //         cout
      //     << a[i] << " ";
      // cout << endl;

      ll p = ans;
      for (int i = n - 3; i >= 1; i -= 2)
      {
        ll x = p - a[i] + a[i + 1];
        ans = min(ans, x);
        p = x;
      }
      cout << ans << endl;
    }
  }
  return 0;
}