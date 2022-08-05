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

class dsu
{
  int n;
  vector<int> p;

public:
  dsu(int _n) : n(_n)
  {
    p.resize(n);
    iota(all(p), 0);
  }

  int get(int x)
  {
    return p[x] == x ? x : p[x] = get(p[x]);
  }

  bool unite(int x, int y)
  {
    x = get(x);
    y = get(y);
    if (x != y)
    {
      p[x] = y;
      return true;
    }
    return false;
  }
};

int main()
{
  Faster
      T
  {
    int n;
    cin >> n;
    vector<int> v(n);
    dsu d(2 * n);
    ffor(i, 0, n)
    {
      int x, y;
      cin >> x >> y;
      x--;
      y--;
      v[x]++;
      v[y]++;
      d.unite(x, y + n);
      d.unite(x + n, y);
    }
    bool f = true;
    ffor(i, 0, n)
    {
      if (v[i] > 2)
      {
        f = false;
        break;
      }
      if (d.get(i) == d.get(i + n))
      {
        f = false;
        break;
      }
    }
    cout << (f ? "YES\n" : "NO\n");
  }
  return 0;
}