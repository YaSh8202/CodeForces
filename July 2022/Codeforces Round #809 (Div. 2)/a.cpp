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
    string s(m, 'B');
    ffor(i, 0, n)
    {
      int x;
      cin >> x;
      string t1 = s;
      t1[x - 1] = 'A';
      s[m - x] = 'A';
      if (t1 < s)
      {
        s = t1;
      }
    }
    cout << s << endl;
  }
  return 0;
}