#include <iostream>
using namespace std;
#include <queue>

int K_smallest(int arr[], int k)
{
    priority_queue<int> maxh;
    for (int i = 0; i < 6; i++)
    {
        maxh.push(arr[i]);
    }
    while (maxh.size() != k)
    {
        maxh.pop();
    }
    return maxh.top();
}
int main()
{
    int arr[] = {1, 3, 12, 5, 15, 11};
    int f = K_smallest(arr, 3);
    int sec = K_smallest(arr, 6);
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i]>f && arr[i]<sec)
        {
            sum = sum + arr[i];
        }
    }
    cout << sum;
}
