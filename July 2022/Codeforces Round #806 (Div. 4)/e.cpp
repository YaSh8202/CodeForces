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

int solve(vector<vector<int>> v, int x, int y, int n)
{
  int k = 0;
  ffor(i, 0, n - 1)
  {
    int o = 0, j = 0;
    if (v[0 + x][i + y] == 0)
      j++;
    else
      o++;
    if (v[(n - 1 - i) - x][y] == 0)
      j++;
    else
      o++;

    if (v[n - 1 - x][(n - 1 - i) - y] == 0)
      j++;
    else
      o++;
    if (v[i + x][n - 1 - y] == 0)
      j++;
    else
      o++;
    k += min(o, j);
  }
  return k;
}

int main()
{
  T
  {
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    ffor(i, 0, n)
    {
      string s;
      cin >> s;
      ffor(j, 0, n)
      {
        mat[i][j] = s[j] - '0';
      }
    }
    int x = 0, y = 0;
    int ans = 0;
    while (n > 1)
    {
      ans += solve(mat, x, y, n);
      x++;
      y++;
      n -= (x + y);
    }
    cout << ans << endl;
  }
  return 0;
}