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
    int n;
    cin>>n;
    vector<int> v(n+1);
    ffor(i,1,n+1)
      cin>>v[i];

    vector<bool> nums(n+1,false);
    vector<bool> visited(n+1,false);
    vector<vector<int>> ans;

    ffor(i,1,n+1){
      nums[v[i]] = true;
    }
    ffor(i,1,n+1){
      if(nums[i]==false){
        int j=i;
        vector<int> t;
        while(1){
          if(visited[j]==true)
            break;
          t.push_back(j);
          visited[j] = true;
          j = v[j];
        }
        if(t.size()>0)
          ans.push_back(t);
      }
    }

    ffor(i,1,n+1){
      if(visited[i]==false){
        visited[i] = true;
        vector<int> t;
        t.push_back(i);
        ans.push_back(t);
      }
    }

    cout<<ans.size()<<endl;
    for(auto i: ans){
      cout<<i.size()<<endl;
      reverse(all(i));
      for(auto j: i){
        cout<<j<<" ";
      }
      cout<<endl;
    }
    cout<<endl;
  }
  return 0;
}