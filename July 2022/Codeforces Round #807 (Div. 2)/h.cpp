#include <bits/stdc++.h>
#define ll long long int
#define Faster                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define ffor(i, a, n) for (int i = a; i < n; i++)
#define T      \
  ll test;     \
  cin >> test; \
  ffor(tt, 1, test + 1)
#define all(v) v.begin(), v.end()
#define setpre(f, n) fixed << setprecision(n) << f
#define MOD 1000000007
using namespace std;

// def getMaxArea(w, h, isVertical, distance):
//     # Write your code here
//     def insort(test_list, k):
//         for i in range(len(test_list)):
//             if test_list[i] > k:
//                 break
//         return test_list[:i] + [k] + test_list[i:]

//     maxy = 0
//     wline = [0,w]
//     hline = [0,h]
//     res = []
//     for i in range(len(isVertical)):
//         if isVertical[i]:
//             wline = insort(wline, distance[i])
//         else:
//             hline = insort(hline, distance[i])
//         wmax = 0
//         hmax = 0
//         for i in range(1,len(wline)):
//             if wline[i] - wline[i-1] > wmax:
//                 wmax = wline[i] - wline[i-1]
//         for i in range(1,len(hline)):
//             if hline[i] - hline[i-1] > hmax:
//                 hmax = hline[i] - hline[i-1]

//         res.append(hmax * wmax)
//     return res

int getMaxArea(vector<int> isVertical, vector<int> distance, int w, int h)
{
}

int main()
{

  return 0;
}