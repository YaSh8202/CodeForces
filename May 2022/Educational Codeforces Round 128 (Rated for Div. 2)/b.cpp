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
    vector<string> v(n);
    ffor(i, 0, n)
            cin >>
        v[i];
    int u = 0, l = 0;
    ffor(i, 0, n)
    {
      if (v[i].find('R') != string::npos)
      {
        break;
      }
      u++;
    }
    bool f = true;
    ffor(i, 0, m)
    {
      ffor(j, 0, n)
      {
        if (v[j][i] == 'R')
        {
          f = false;
          break;
        }
      }
      if (!f)
        break;
      l++;
    }
    // cout << u << " " << l << endl;
    bool ans = false;
    ffor(i, 0, n)
    {
      ffor(j, 0, m)
      {
        if (v[i][j] == 'R')
        {
          if (i <= u and j <= l)
          {
            ans = true;
          }
        }
      }
    }
    if(ans)
      cout<<"YES\n";
    else  
      cout<<"NO\n";
  }
  return 0;
}