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
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);
    ll sum = 0;
    ffor(i, 0, n)
    {
      cin >>
          v[i];
      sum += v[i];
    }

    sort(all(v), greater<ll>());
    ffor(i, 1, n)
    {
      v[i] += v[i - 1];
    }
    
    vector<pair<int,int>> vp(n);
    vp[0] = make_pair(1,v[0]);
    ffor(i,1,n){
      vp[i] = make_pair(v[i-1]+1,v[i]);
    }

    ffor(i, 0, q)
    {
      int x;
      cin >> x;
      if (x > sum)
      {
        cout << -1 << endl;
        continue;
      }
      int s=0,e=n-1,mid;
      while(s<=e){
        mid = (s+e)/2;
        if(x>=vp[mid].first and x<=vp[mid].second)
        {
          cout<<mid+1<<endl;
          break;
        }
        else if(x<vp[mid].first){
          e = mid-1;
        }
        else{
          s = mid+1;
        }
      }
    }
  }
  return 0;
}