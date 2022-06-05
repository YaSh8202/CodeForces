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

  ll n, q;
  cin >> n >> q;
  unsigned ll sum = 0;
  vector<int> v(n);
  ffor(i, 0, n)
  {
    cin >> v[i];
    sum += v[i];
  }

  int same = 0;
  map<int,int> m;
  ffor(i, 0, q)
  {
    int t;
    cin >> t;
    if (t == 1)
    {
      
      int a, b;
      cin >> a >> b;
      if (same == 0)
      {
        sum = sum - v[a - 1] + b;
        cout << sum << endl;
        v[a - 1] = b;
      }
      else
      {
        int val = same;
        if(m.count(a-1))
          val = m[a-1];
        sum = sum - val + b;
        m[a-1] = b;
        cout << sum << endl;
      }
    }
    else
    {
      m.clear();
      ll a;
      cin >> a;
      same = a;
      sum = same  * n;
      cout << sum << endl;
    }
  }

  return 0;
}