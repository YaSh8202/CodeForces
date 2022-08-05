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
    ffor(i, 0, n)
    {
      int k;
      cin >> k;
      string s;
      cin >> s;
      int d = count(all(s), 'D');
      int u = k - d;
      v[i] = v[i] + d - u;
      if (v[i] < 0)
        v[i] += 10;
      v[i] %= 10;
    }
    ffor(i, 0, n)
            cout
        << v[i] << " ";
    cout << endl;
  }
  return 0;
}