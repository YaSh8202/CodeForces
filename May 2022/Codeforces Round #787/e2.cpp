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

bool cmp(pair<char, int> a, pair<char, int> b)
{
  return a.first > b.first;
}

int main()
{
  T
  {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, char> m;
    for (char i = 'a'; i <= 'z'; i++)
    {
      m[i] = i;
    }
    vector<pair<char, int>> ci(n);
    ffor(i, 0, n)
    {
      ci[i] = (make_pair(s[i], i));
    }

    sort(all(ci), cmp);

    int min_index = n + 1;
    for (auto i : ci)
    {
      // cout<<i.first<<' '<<i.second<<endl;
      if (i.second == 0)
        break;
      if(i.second > min_index)
        continue;
      int x = i.first - 'a';
      if (k >= x)
      {
        int ch = i.first;
        k -= x;
        s[i.second] = s[i.second] - x;
        for (char j = s[i.second]; j <= ch; j++)
        {
          m[j] = min(s[i.second], m[j]);
        }
        break;
      }
      else{
        min_index = min(i.second,min_index);
      }
    }
    ffor(i, 0, n)
    {
      s[i] = m[s[i]];
      if (k > 0 and s[i] != 'a')
      {
        int ch = s[i];
        int x = min(s[i] - 'a', k);
        k -= x;
        s[i] = s[i] - x;
        for (char j = s[i]; j <= ch; j++)
        {
          m[j] = min(s[i], m[j]);
        }
      }
    }
    cout << s << endl;
  }
  return 0;
}