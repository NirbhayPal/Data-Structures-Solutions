#include <iostream>

#include <bits/stdc++.h>
#include <queue>

using namespace std;
int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int size = 6,k=3;
    priority_queue<int, vector<int>, greater<int>> minh;
    for (int i = 0; i < size; i++)
    {
        minh.push(arr[i]);
        if (minh.size() > k)
        {
            minh.pop();
        }
    }
    while (minh.size() != 0)
    {
        cout << minh.top() << endl;
        minh.pop();
    }
}