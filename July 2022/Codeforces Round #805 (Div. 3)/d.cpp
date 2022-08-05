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

bool cmp_c(pair<char, int> a1, pair<char, int> a2)
{
  return a1.first < a2.first;
}
bool cmp_i(pair<char, int> a1, pair<char, int> a2)
{
  return a1.second < a2.second;
}

int main()
{
  T
  {
    string s;
    cin >> s;
    int n = s.length();
    int p;
    cin >> p;
    vector<pair<char, int>> ci(s.length());
    ffor(i, 0, n)
    {
      ci[i] = {s[i], i};
    }
    sort(all(ci), cmp_c);
    int i = 0;
    vector<pair<char, int>> ans;
    for (; i < n; i++)
    {
      int v = ci[i].first - 'a' + 1;
      if (p >= v)
      {
        p -= v;
        ans.push_back(ci[i]);
      }
      else
        break;
    }
    sort(all(ans),cmp_i);
    for(auto j: ans){
      cout<<j.first;
    }
    cout<<endl;
  }
  return 0;
}