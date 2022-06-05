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
  ll n, q;
  cin >> n >> q;
  vector<int> v(n);
  ffor(i, 0, n)
          cin >>
      v[i];

  int val = 0;
  int64_t sum = 0;
  map<int, int> m;
  ffor(i, 0, n)
  {
    sum += v[i];
    m[i] = v[i];
  }
  while (q--)
  {
    int t;
    cin >> t;
    if (t == 1)
    {
      int i, x;
      cin >> i >> x;
      --i;
      if (!m.count(i))
        m[i] = val;
      sum -= m[i];
      m[i] = x;
      sum += m[i];
    }
    else
    {
      ll x;
      cin >> x;
      val = x;
      sum = x * n;
      m.clear();
    }
    cout << sum << endl;
  }

  return 0;
}