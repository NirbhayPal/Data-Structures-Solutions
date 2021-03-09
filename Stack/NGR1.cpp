#include <iostream>
#include <stack>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int i;
vector<int> v = {};
int main()
{
    int arr[] = {1, 3, 2, 4};
    int size = 4;
    stack<int> s;

    for (i = size - 1; i >= 0; i--)
    {
        if (s.size() == 0)
        {
            v.push_back(-1);
        }
        else if (s.size() > 0 && s.top() > arr[i])
        {
            v.push_back(s.top());
        }
        else if (s.size() > 0 && s.top()<=arr[i])
        {
            while (s.size()>0 && s.top() <= arr[i])
                {
                    s.pop();
                }
            if (s.size() == 0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    reverse(v.begin(), v.end());
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    // cout << s.top() << endl; // prints 4, as 4 is the topmost element

    //   cout << s.size(); // prints 3, as there are 3 elements in
}