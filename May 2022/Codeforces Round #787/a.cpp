#include<bits/stdc++.h>
#define ll long long int
#define Faster  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ffor(i,a,n) for(int i=a;i<n;i++)
#define T ll test; cin>>test; ffor(tt,1,test+1)
#define all(v) v.begin(), v.end()
#define no_decimals(f, n) fixed << setprecision(n) << f
#define MOD 1000000007
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

using namespace std;
int main()
{
  T{
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    int dogs = max(x - a,0);
    int cats = max(y-b,0);

    if(c-dogs-cats >= 0)
      YES
    else
      NO    

  }
  return 0;
}