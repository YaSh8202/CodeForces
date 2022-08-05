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
    int n, x;
    cin >> n >> x;
    vector<int> v(2 * n);
    ffor(i, 0, 2 * n)
            cin >>
        v[i];

    sort(all(v));
    bool f = true;
    ffor(i, 0, n)
    {
      if (v[i + n] < (v[i] + x))
      {
        f = false;
        break;
      }
    }
    cout << (f ? "YES\n" : "NO\n");
  }
  return 0;
}