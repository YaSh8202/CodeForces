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
    vector<pair<int, int>> v(n + 1, {0, 0});
    ffor(i, 1, n + 1)
    {
      int x;
      cin >> x;
      if (v[x] == make_pair(0, 0))
      {
        v[x] = make_pair(i, 1);
      }
      else
      {
        if ((i - v[x].first) % 2)
        {
          v[x].first = i;
          v[x].second++;
        }
      }
    }
    ffor(i, 1, n + 1)
    {
      cout << v[i].second << " ";
    }
    cout << endl;
  }
  return 0;
}