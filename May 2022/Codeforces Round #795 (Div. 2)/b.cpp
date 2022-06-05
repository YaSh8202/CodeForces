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
    vector<int> v(n + 1);
    ffor(i, 1, n + 1)
            cin >>
        v[i];
    vector<pair<int, int>> ans;
    int l = 1;
    bool f = true;
    int i = 2;
    for (i = 2; i < n + 1; i++)
    {
      if (v[i] != v[l])
      {
        if (i - l == 1)
        {
          f = false;
          break;
        }
        else
        {
          ans.push_back(make_pair(l, i - 1));
          l = i;
        }
      }
    }
    if (i - l == 1)
    {
      f = false;
    }
    else
    {
      ans.push_back(make_pair(l, i - 1));
      l = i;
    }

    if (!f or ans.size()==0 )
      cout<<-1<<endl;
    else
    {
      for (auto i : ans)
      {
        cout << i.second << " ";
        ffor(j, i.first, i.second)
        {
          cout << j << " ";
        }
        cout << endl;
      }
    }
  }
  return 0;
}