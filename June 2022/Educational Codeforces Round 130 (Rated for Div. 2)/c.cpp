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

bool solve(string s, string t, int i)
{
  if (s == t)
    return true;

  if (i == s.length() - 1)
    return false;

  if (s[i] == 'a' and s[i + 1] == 'b')
  {
    string temp = s;
    temp[i] = 'b';
    temp[i + 1] = 'a';
    return solve(temp, t, i + 1) or solve(s, t, i + 1);
  }
  else if (s[i] == 'b' and s[i + 1] == 'c')
  {
    string temp = s;
    temp[i] = 'c';
    temp[i + 1] = 'b';
    return solve(temp, t, i + 1) or solve(s, t, i + 1);
  }
  else
  {
    return solve(s, t, i + 1);
  }
}

int main()
{
  T
  {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    cout << (solve(s, t, 0) ? "YES\n" : "NO\n");
  }
  return 0;
}