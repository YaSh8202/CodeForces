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
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    bool f = true;
    for (int i = n % 2; i < n - 1; i += 2)
    {
      if (v[i] > v[i + 1])
        swap(v[i], v[i + 1]);
    }

    for (int i = 0; i < n - 1; i++)
    {
      if (v[i] > v[i + 1])
      {
        f = false;
      }
    }
    string ans = f ? "YES" : "NO";
    cout << ans << endl;
  }
  return 0;
}