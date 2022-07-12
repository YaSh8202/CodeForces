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

  int n, q;
  cin >> n >> q;
  vector<ll> p(n);
  ffor(i, 0, n)
          cin >>
      p[i];

  sort(all(p), greater<ll>());
  ffor(i, 1, n)
      p[i] += p[i - 1];
  while (q--)
  {
    int x, y;
    cin >> x >> y;
    int l = x - y - 1;
    int r = x - 1;
    ll ans = p[r] - (l < 0 ? 0 : p[l]);
    cout << ans << endl;
  }

  return 0;
}