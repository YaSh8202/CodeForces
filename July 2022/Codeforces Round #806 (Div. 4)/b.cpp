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
    string s;
    cin >> s;
    map<char, bool> m;
    int c = 0;
    for (auto i : s)
    {
      if (m[i] == false)
      {
        c += 2;
        m[i] = true;
      }
      else
        c++;
    }
    cout << c << endl;
  }
  return 0;
}