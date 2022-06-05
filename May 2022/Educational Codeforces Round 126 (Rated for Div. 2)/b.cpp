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
#define MOD 32768
using namespace std;
int main()
{
  T
  {
    int n;
    cin >> n;

    int i = 0;
    int j = 0;
    int k = 0;
    int m = INT_MAX;
    while (k < 16)
    {
      int i = n+k;
      j = 0;
      while (i%MOD)
      {
        i = (i * 2) % MOD;
        j++;
      }
      m = min(k + j, m);
      k++;
    }
    cout << m << " ";
  }
  return 0;
}