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
    map<char, char> m;
    for (char i = 'a'; i <= 'z'; i++)
    {
      m[i] = i;
    }

    ffor(i, 0, n)
    {
      s[i] = m[s[i]];
      if (k > 0 and s[i] != 'a')
      {
        int ch = s[i];
        int x = min(s[i] - 'a', k);
        k -= x;
        s[i] = s[i] - x;
        for (char j = s[i]; j <= ch; j++)
        {
          m[j] = min(s[i], m[j]);
        }
      }
    }
    cout<<s<<endl;
  }
  return 0;
}