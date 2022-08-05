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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    ffor(i, 0, n)
    {
      cin >> v[i];
    }
    ll ans = 1e9;
    ffor(i, 0, v[0] + 1)
    {
      ll c = i;
      ffor(j, 0, n)
      {
        ll p = min(k, i ? v[j] / i : k);
        c = max(v[j] / p, c);
      }
      ans = min(ans, c - i);
    }
    cout << ans << endl;
  }
  return 0;
}