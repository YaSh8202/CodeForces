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
  map<string, int> m;
  int k = 1;
  for (int i = 0; i < 26; i++)
  {
    for (int j = 0; j < 26; j++)
    {
      if (i == j)
        continue;
      string s;

      s += ('a'+i);
      s += ('a'+j);
      // cout << s << " ";
      m[s] = k++;
    }
  }

  T
  {
    string x;
    cin >> x;
    cout << m[x] << endl;
  }
  return 0;
}