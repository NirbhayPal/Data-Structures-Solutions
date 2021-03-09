#include <stdio.h>

void print_spiral(int m, int n, int matrix[][n])
{
    int k = 0, l = 0, i;
    int last_row = m - 1, last_col = n - 1;
    while (k <= last_row && l <= last_col)
    {
        for (i = l; i <= last_col; i++)
        {
            printf("%d\n", matrix[k][i]);
        }
        k++;

        for (i = k; i <= last_row; i++)
        {
            printf("%d\n", matrix[i][last_col]);
        }
        last_col--;

        for (i = last_col; i >= l; i--)
        {
            printf("%d\n", matrix[last_row][i]);
        }
        last_row--;

        for (i = last_row; i >= k; i--)
        {
            printf("%d\n", matrix[i][l]);
        }
        l++;
    }
}

int main()
{
    int matrix[][5] = {{2, 3, 4, 5, 6},
                       {7, 8, 9, 10, 11},
                       {12, 13, 14, 15, 16},
                       {17, 18, 19, 20, 21}};

    print_spiral(4, 5, matrix);
}