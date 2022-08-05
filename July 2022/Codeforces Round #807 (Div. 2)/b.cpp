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
    ll n;
    cin >> n;
    vector<ll> v(n);
    int s = n - 1;
    ffor(i, 0, n)
    {
      cin >> v[i];
      if (s == n - 1 and v[i] > 0)
      {
        s = i;
      }
    }

    ll c = 0, ans = 0;
    for (int i = n - 2; i >= 0; i--)
    {
      if (i < s)
        break;
      if (v[i] == 0)
      {
        c++;
        ans += 2;
      }
      else
      {
        ll x = v[i] - c;
        ans += x;
        c = 0;
      }
    }
    cout << ans << endl;
  }
  return 0;
}