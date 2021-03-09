#include <stdio.h>

int rowWithMax_1(int N, int M, int mat[][4])
{
    
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            if (mat[j][i] == 1)
            {
                printf("%dth indexed row", j);
                return j;
            }
        }
    }
}
int main()
{
    int N = 4, M = 4;
    int Arr[][4] = {{0, 0, 0, 1},
                    {0, 0, 1, 1},
                    {0, 1, 1, 1},
                    {0, 0, 1, 1}};

    rowWithMax_1(4, 4, Arr);
    return 0;
}