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
    vector<string> v(8);
    ffor(i,0,8)
      cin>>v[i];

    ffor(i,1,7){
      ffor(j,1,7){
        if(v[i][j]=='#' && v[i-1][j-1]=='#' && v[i-1][j+1]=='#' && v[i+1][j-1]=='#' && v[i+1][j+1]=='#'){
          cout<<i+1<<" "<<j+1<<endl;
          break;
        }
      }
    }
  }
  return 0;
}