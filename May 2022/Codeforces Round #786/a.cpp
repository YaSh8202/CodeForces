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
    int x,y;
    cin>>y>>x;
    float z = float(x)/y - x/y;

    if(z!=0)
      cout<<"0 0"<<endl;
    else{
      cout<<1<<" "<<x/y<<endl;
    }

  }
  return 0;
}