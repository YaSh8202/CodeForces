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
  Faster
      T
  {
    int n, k;
    cin >> n >> k;
    map<int, vector<int>> m;
    ffor(i, 1, n + 1)
    {
      int x;
      cin >> x;
      m[x].push_back(i);
    }
    ffor(q, 0, k)
    {
      int x, y;
      cin >> x >> y;
      bool f = true;
      if (m[x].size() == 0 or m[y].size() == 0)
        f = false;
      else
      {
        int l = m[x][0];
        int r = m[y][m[y].size() - 1];
        if(l>r)
          f = false;
      }
      if (!f)
        cout << "NO" << endl;
      else
        cout << "YES\n";
    }
  }
  return 0;
}