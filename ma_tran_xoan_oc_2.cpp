#include <bits/stdc++.h>
using namespace std;
#define run()  \
     int t;    \
     cin >> t; \
     while (t--)
main()
{
     run()
     {
          int n, m;
          cin >> n >> m;
          int a[n][m], b[m * n + 1];
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < m; j++)
               {
                    cin >> a[i][j];
               }
          }
          int hang = n - 1, cot = m - 1, h = n * m, d = 0, l1 = 0;
          while (d <= n / 2)
          {
               for (int i = d; i <= cot; i++)
                    b[l1++] = a[d][i];
               if (l1 == h)
                    break;
               for (int i = d + 1; i <= hang; i++)
                    b[l1++] = a[i][cot];
               if (l1 == h)
                    break;
               for (int i = cot - 1; i >= d; i--)
                    b[l1++] = a[hang][i];
               if (l1 == h)
                    break;
               for (int i = hang - 1; i > d; i--)
                    b[l1++] = a[i][d];
               if (l1 == h)
                    break;
               d++, hang--, cot--;
          }
          for (int i = l1 - 1; i >= 0; i--)
          {
               cout << b[i] << " ";
          }
          cout << endl;
     }
}
