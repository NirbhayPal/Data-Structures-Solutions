// #include <iostream>

#include <bits/stdc++.h>

// #include <queue>

using namespace std;

int main()
{
    priority_queue<int> maxh;
    int arr[] = {7, 10, 4, 3, 20, 15};
    int size = 6;
    int k = 3;   
    for (int i = 0; i < size; i++)
    {
        maxh.push(arr[i]);

        if (maxh.size() > k)
        {
            maxh.pop();
        }
    }
    int t = maxh.top();
    cout << t << endl;
}
