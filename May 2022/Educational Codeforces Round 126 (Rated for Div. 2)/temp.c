#include <stdio.h>
void printOptimalPattern(int x, int y, int s[][y + 1])
{
  for (int i = 1; i < 6; i++)
  {

    for (int j = i + 1; j <= 6; j++)
      printf(" i: %d j: %d value=%d;", i, j, s[i][j]);
    printf("\n");
  }
  // printf("i: %d  j: %d\n",i,j);
  if (x == y)
    printf("A%d ", x);
  //  x=1;
  else
  {
    printf("( i: %d j: %d s[i][j]: %d\n ", x, y, s[x][y]);
    printOptimalPattern(x, s[x][y], s);
    printOptimalPattern(s[x][y] + 1, y, s);
    printf(")");
  }
}
void matrixMultiply(int p[], int n)
{
  int i, j, k, l;
  int m[n + 1][n + 1], s[n][n + 1];
  for (i = 1; i <= n; i++)
    m[i][i] = 0;

  for (l = 2; l <= n; l++)
  {
    for (i = 1; i <= n - l + 1; i++)
    {

      j = i + l - 1;
      m[i][j] = __INT_MAX__;
      for (k = i; k <= j - 1; k++)
      {
        // printf("multiply: %d\n",(p[i - 1] * p[k] * p[j]));
        int q = m[i][k] + m[k + 1][j] + (p[i - 1] * p[k] * p[j]);
        if (q < m[i][j])
        {

          m[i][j] = q;
          s[i][j] = k;
          printf("i: %d  j: %d q: %d s[i][j]: %d\n", i, j, q, s[i][j]);
        }
      }
    }
  }
  for (i = 1; i < n; i++)
  {

    for (j = i + 1; j <= n; j++)
      printf(" i: %d j: %d value=%d;", i, j, s[i][j]);
    printf("\n");
  }
  printOptimalPattern(1, n, s);
}
int main()
{
  int n = 6;
  int p[] = {30, 35, 15, 5, 10, 20, 25};
  matrixMultiply(p, n);
  return 0;
}