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

int solve(vector<int> v, int sum, int i, int j, vector<vector<int>> &dp)
{
  if (sum == 0)
    return (i + (v.size() - j - 1));
  if (i >= j)
    return 1e7;

  if (dp[i][j] != -1)
    return dp[i][j];

  return dp[i][j] = min(solve(v, sum - v[i], i + 1, j, dp), solve(v, sum - v[j], i, j - 1, dp));
}

int main()
{
  T
  {
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    int sum = 0;
    ffor(i, 0, n)
    {
      cin >> v[i];
      sum += v[i];
    }
    if (sum < s)
    {
      cout << -1 << endl;
      continue;
    }
    else if (sum == s)
    {
      cout << 0 << endl;
      continue;
    }
    int i = 0, j = n - 1;
    vector<vector<int>> dp(n,vector<int> (n,-1));
    cout << solve(v, sum - s, i, j,dp) << endl;
  }
  return 0;
}