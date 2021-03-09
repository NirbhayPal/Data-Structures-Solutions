#include <stdio.h>

void search(int m, int n, int mat[][n], int find)
{   int i=0 , j=n-1;
    while (i<n && j>=0)
    {
        if (find==mat[0][j]){
            printf("Found at %d %d",i, j);
            return;
        }
        
        else{
        if (mat[i][j]<find)
        {
            j--;
        }
        else
        {
            i--;
        }
        }
    }
    
}

int main()
{
    int matrix[][4] = {{1, 3, 5, 7},
                       {10, 11, 16, 20},
                       {23, 30, 34, 60}};

    search(3, 4, matrix, 7);
    return 0;
}
