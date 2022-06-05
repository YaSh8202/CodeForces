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

bool isValid(int i, int j, int n, int m)
{
  return !(i < 0 or j < 0 or i >= n or j >= m);
}

int main()
{
  T
  {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m, 0));
    ffor(i, 0, n)
    {
      ffor(j, 0, m)
      {
        cin >> v[i][j];
      }
    }
    ll mx = 0;
    ffor(i, 0, n)
    {
      ffor(j, 0, m)
      {
        ll sum = v[i][j];
        int x, y;
        {
          x = i;
          y = j;
          while(1){
            x--;
            y--;
            if(isValid(x,y,n,m)){
              sum+=v[x][y];
            }
            else
            break;
          }
        }
        {
          x = i;
          y = j;
          while(1){
            x--;
            y++;
            if(isValid(x,y,n,m)){
              sum+=v[x][y];
            }
            else
            break;
          }
        }
        {
          x = i;
          y = j;
          while(1){
            x++;
            y--;
            if(isValid(x,y,n,m)){
              sum+=v[x][y];
            }
            else
            break;
          }
        }
        {
          x = i;
          y = j;
          while(1){
            x++;
            y++;
            if(isValid(x,y,n,m)){
              sum+=v[x][y];
            }
            else
            break;
          }
        }
        mx = max(mx,sum);
      }
    }
    cout<<mx<<endl;
  }
  return 0;
}