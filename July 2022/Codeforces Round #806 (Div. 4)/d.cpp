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
    map<string, bool> m;
    vector<string> v(n);
    ffor(i, 0, n)
    {
      cin >> v[i];
      m[v[i]] = true;
    }
    for (auto s : v)
    {
      bool f = false;
      int l = s.length();
      for (int i = 1; i < l; i++)
      {
        string s1 = s.substr(0, i);
        string s2 = s.substr(i);
        if (m[s1] and m[s2])
        {
          cout << 1;
          f = true;
          break;
        }
      }
      if (!f)
        cout << 0;
    }
    cout << endl;
  }
  return 0;
}