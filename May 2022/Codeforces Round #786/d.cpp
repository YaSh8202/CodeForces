#include<bits/stdc++.h>
#define ll long long int
#define Faster  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ffor(i,a,n) for(int i=a;i<n;i++)
#define T ll test; cin>>test; ffor(tt,1,test+1)
#define all(v) v.begin(), v.end()
#define setpre(f, n) fixed << setprecision(n) << f
#define MOD 1000000007
using namespace std;
int main()
{
  T
  {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = n - 1; i >= 0; i--)
    {
      cin>>v[i];
    }
    int x = v[0];
    bool next = true,f = true;

    if(v[1]>v[0])
      next = false;

    for (int i = 2; i < n; i++)
    {
      if(v[i]>v[i-1]) 
      {
        if(next){
          next = !next;
        }
        else{
          f = false;
        }
      }
      else{
        if(!next){
          next = !next;
        }
        else{
          f = false;
        }
      }
    }
    string ans = f?"YES":"NO";
    cout<<ans<<endl;
    
    
  }
  return 0;
}