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
    int ans=0;
    int cnt=0;
    string t;
    for(auto c: s){
      if(t.find(c)!=string::npos){
        continue;
      }
      if(t.length()==3){
        t="";
        cnt++;
      }
      t+=c;
    }
    if(t.length()>0)
    cnt++;
    cout<<cnt<<endl;
  }
  return 0;
}