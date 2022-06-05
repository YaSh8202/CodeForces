#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  
  int c_max=arr[0],c_min=arr[0];
  int comp=0;
  for (int i = n%2; i < n; i+=2){
    comp++;
    int max,min;
    if(arr[i]>arr[i+1]){
      max=arr[i];
      min=arr[i+1];
    }
    else{
      max=arr[i+1];
      min=arr[i];
    }
    comp+=2;
    if(max>c_max){
      c_max=max;
    }
    if(min<c_min){
      c_min=min;
    }
  }
  cout<<"Max: "<<c_max<<" Min: "<<c_min<<endl;
  cout<<"Comparisons: "<<comp<<endl;
  return 0;
}