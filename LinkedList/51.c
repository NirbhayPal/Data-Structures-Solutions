#include <stdio.h>

int main()
{
  int arr1[4][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16}};
  int n = 4;
  for (int j = 0; j < n; j++)
  {
    for (int i = n-1; i >= 0; i--)
    {
      printf("%d ", arr1[i][j]);
    }
    printf("\n");
  }

  return 0;
}