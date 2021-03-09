#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <vector>

int main()
{
    int arr[] = {6, 5, 3, 2, 8, 10, 9};
    int k = 3;
    priority_queue<int, vector<int>, greater<int>> minh;
    vector<int> v ;

    for (int i = 0; i < 7; i++)
    {
        minh.push(arr[i]);
        if ((minh.size()) > k)
        {
            int t = minh.top();
            v.push_back(t);
            minh.pop();
        }
    }
    while (minh.size() != 0)
    {
        v.push_back(minh.top());
        minh.pop();
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}