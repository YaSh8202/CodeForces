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
  Faster ll n, q;
  cin >> n >> q;
  map<ll, ll> chessX;
  map<ll, ll> chessY;
  set<ll> sx;
  set<ll> sy;
  ffor(i, 1, n + 1)
  {
    sx.insert(i);
    sy.insert(i);
  }
  ffor(i, 0, q)
  {
    int t;
    cin >> t;
    ll x1, y1;
    cin >> x1 >> y1;
    if (t == 1)
    {
      chessY[y1] += 1;
      chessX[x1] += 1;
      sx.erase(x1);
      sy.erase(y1);
    }
    else if (t == 2)
    {
      chessY[y1] -= 1;
      chessX[x1] -= 1;
      if (chessX[x1] == 0)
        sx.insert(x1);
      if (chessY[y1] == 0)
        sy.insert(y1);
    }
    else
    {
      ll x2, y2;
      cin >> x2 >> y2;
      auto it = sx.lower_bound(x1);
      if (*it > x2 or it==sx.end())
        cout << "Yes\n";
      else
      {
        auto it1 = sy.lower_bound(y1);
        if (*it1 > y2 or it1==sy.end())
          cout << "Yes\n";
        else
          cout << "No\n";
      }
    }
  }

  return 0;
}