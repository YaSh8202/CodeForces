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
    vector<int> v(n);
    ffor(i, 0, n)
            cin >>
        v[i];

    reverse(all(v));
    bool f = true;
    ll c = 0;
    ffor(i, 1, n)
    {
      if (!f)
        break;
      if (v[i - 1] == 0)
      {
        f = false;
        break;
      }
      while (v[i] >= v[i - 1])
      {
        v[i] /= 2;
        c++;
      }
    }

    if (f)
      cout << c << endl;
    else
      cout << -1 << endl;
  }
  return 0;
}