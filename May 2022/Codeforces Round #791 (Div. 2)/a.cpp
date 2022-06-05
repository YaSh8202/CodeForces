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
    ll n;
    cin>>n;
    bool f = true;
    
    ll max = n/4;
    ll min = n/6;
    if(n%6)
      min+=1;
    if(n%2==1)
      f = false;
    if(n<4)
      f =false;

    if(f)
    cout<<min<<" "<<max<<endl;
    else
      cout<<-1<<endl;
  }
  return 0;
}