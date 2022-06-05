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

string scores = "_abcdefghijklmnopqrstuvwxyz";

int score(string s, int a, int b)
{
  int score = 0;
  for (int i = a; i <= b; i++)
  {
    score += scores.find(s[i]);
    // cout << score << " ";
  }

  return score;
}

int main()
{
  T
  {
    string s;
    cin >> s;
    int a = 0, b = 0;
    int n = s.size();
    if (n % 2 == 0)
    {
      a = score(s, 0, n - 1);
      b = 0;
    }
    else
    {
      if (s[0] >= s[n - 1])
      {
        a = score(s, 0, n - 2);
        b = int(s[n - 1]) - (int)'a' + 1;
      }
      else
      {
        a = score(s, 1, n - 1);
        b = s[0] - 'a' + 1;
      }
    }
    // cout << a << ' ' << b << endl;
    if (a > b)
    {
      cout << "Alice " << a - b << endl;
    }
    else
      cout << "Bob " << b - a << endl;
  }
  return 0;
}