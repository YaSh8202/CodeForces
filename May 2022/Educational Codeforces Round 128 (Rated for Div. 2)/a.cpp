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
  T{
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    bool f = false;
    int i;
    for(i=l1;i<=r1;i++){
      if(i>=l2 and i<=r2)
      {
        f = true;
        break;
      }
    }
    if(f)
      cout<<i<<endl;
    else
      cout<<l1+l2<<endl;
  }  
  return 0;
}