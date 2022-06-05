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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = count(all(s), '1');
    int ans = cnt * 11;
    int last = INT_MAX;
    int first = INT_MAX;
    if (cnt > 0)
      last = s.find_last_of('1');
    if (cnt > 0)
      first = s.find('1');

    if (cnt > 0 and k >= (n - 1 - last))
    {
      ans -= 10;
      k -= (n - 1 - last);
      cnt--;
      
    }
    if (cnt > 0 and (k >= (first)))
    {
      ans -= 1;
      cnt--;
    }

    cout << ans << endl;
  }
  return 0;
}