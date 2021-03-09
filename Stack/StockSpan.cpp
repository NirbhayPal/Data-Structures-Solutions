#include <iostream>
#include <stack>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int i;
vector<int> v = {};
int main()
{
    int arr[] = {100,80,60,70,60,75,85};
    int size = 7;
    stack<pair<int, int>> s;

    // for (i = size - 1; i >= 0; i--)
    for (i = 0; i < size; i++)
    {
        if (s.size() == 0)
        {
            v.push_back(-1);
        }
        else if (s.size() > 0 && s.top().first > arr[i])
        {
            v.push_back(s.top().second);
        }
        else if (s.size() > 0 && s.top().first <= arr[i])
        {
            while (s.size() > 0 && s.top().first <= arr[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    //    reverse(v.begin(), v.end());
    for (i = 0; i < v.size(); i++)
        cout << i-v[i] << " ";
    cout << endl;

    // cout << s.top() << endl; // prints 4, as 4 is the topmost element

    //   cout << s.size(); // prints 3, as there are 3 elements in
}