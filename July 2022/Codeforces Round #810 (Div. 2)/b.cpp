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
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1);
    vector<int> deg(n + 1);
    vector<pair<int, int>> p(m);
    ffor(i, 1, n + 1)
    {
      cin >> v[i];
    }
    ffor(i, 0, m)
    {
      int x, y;
      cin >> x >> y;
      p[i] = make_pair(x, y);
      deg[x]++;
      deg[y]++;
    }

    if (m % 2)
    {
      int ans = 1e9;
      ffor(i, 1, n + 1)
      {
        if (deg[i] % 2)
        {
          ans = min(ans, v[i]);
        }
      }

      ffor(i, 0, m)
      {
        if (deg[p[i].first] % 2 == 0 and deg[p[i].second] % 2 == 0)
        {
          ans = min(ans, v[p[i].first] + v[p[i].second]);
        }
      }
      cout << ans << endl;
    }
    else
    {
      cout << 0 << endl;
    }
  }
  return 0;
}