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
    string n;
    cin>>n;

    int a = n[0] + n[1]+ n[2];
    int b = n[3] + n[4] + n[5];

    if(a==b)
      cout<<"YES\n";
    else
      cout<<"NO\n";

  }
  return 0;
}