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
    int n, m;
    cin >> n >> m;
    ll sum = 0;
    ffor(i, 0, n)
    {
      ll x;
      cin >> x;
      sum += x;
    }
    cout<<max(0LL,sum-m)<<endl;
  }
  return 0;
}