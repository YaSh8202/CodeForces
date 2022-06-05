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
    string s;
    cin>>s;
    int c = 0;
    for(auto i: s){
      if(i=='0'){
        c++;
        break;
      }
      else if(i=='1'){
        c = 1;
      }
      else{
        c+=1;
      }
    }
    cout<<c<<endl;
  }
  return 0;
}