#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void selection_sort(int arr[], int n)
{
  int min;
  for (int i = 0; i < n - 1; i++)
  {
    min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min])
        min = j;
    }
    if (min != i)
    {
      swap(arr[min], arr[i]);
    }
  }
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  srand(time(0));
  for (int i = 0; i < n; i++)
  {
    arr[i] = rand();
  }

  int t = clock();
  selection_sort(arr, n);
  t = clock() - t;

  for (int i = 0; i < n; i++)
    cout << arr[i] << ' ';

  double time_taken = double(t) / CLOCKS_PER_SEC;
  cout << time_taken << endl;

  return 0;
}