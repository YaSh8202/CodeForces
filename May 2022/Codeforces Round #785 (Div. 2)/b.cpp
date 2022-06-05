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
    string s;
    cin >> s;
    int n = s.size();
    map<char, bool> m;

    for (int j = 0; j < n; j++)
    {
      m[s[j]] = true;
    }
    bool f = true;
    int c = m.size();

    for (int i = 0; i <= n - c; i++)
    {
      if(!f)
        break;
      map<char, bool> mp;
      for (int j = 0; j < c; j++)
      {
        mp[s[j+i]] = true;
      }
      if(mp.size()!=c){
        f = false;
      }
    }

    if (f)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}