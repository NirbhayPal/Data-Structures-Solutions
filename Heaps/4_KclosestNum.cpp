#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include <vector>

int main()
{
    priority_queue<pair<int, int>> p;
    int x = 7;
    int k = 3;
    int size = 5;
    int arr[] = {5, 6, 7, 8, 9};
    for (int i = 0; i < size; i++) 
    {
        p.push({abs(arr[i] - x), arr[i]});
        if (p.size() > k)
        {
            p.pop();
        }
    }
    while (p.size() != 0)
    {
        cout << p.top().second << endl;
        p.pop();
    }
}