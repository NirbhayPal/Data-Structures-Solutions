#include <iostream>
#include <stack>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int i;
// vector<int> left = {};

vector<int> NSR()
{
    vector<int> right;
    int arr[] = {6, 2, 5, 4, 5, 1, 6};
    int size = 7;
    int pseudo_value = 7;

    stack<pair<int, int>> s;

    for (i = size - 1; i >= 0; i--)
    {
        if (s.size() == 0)
        {
            right.push_back(pseudo_value);
        }
        else if (s.size() > 0 && s.top().first < arr[i])
        {
            right.push_back(s.top().second);
        }
        else if (s.size() > 0 && s.top().first >= arr[i])
        {
            while (s.size() > 0 && s.top().first >= arr[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                right.push_back(pseudo_value);
            }
            else
            {
                right.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    reverse(right.begin(), right.end());

    return right;
}
vector<int> NSL()
{ //NSL
    vector<int> left;
    int arr[] = {6, 2, 5, 4, 5, 1, 6};
    int size = 7;
    int pseudo_index = -1;
    stack<pair<int, int>> s;
    for (i = 0; i < size; i++)
    {
        if (s.size() == 0)
        {
            left.push_back(-1);
        }
        else if (s.size() > 0 && s.top().first < arr[i])
        {
            left.push_back(s.top().second);
        }
        else if (s.size() > 0 && s.top().first >= arr[i])
        {
            while (s.size() > 0 && s.top().first >= arr[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                left.push_back(pseudo_index);
            }
            else
            {
                left.push_back(s.top().second);
            }
        }

        s.push({arr[i], i});
    }
    return left;
}

// vector<int> MAH(vector<int> arr, int size, vector<int> right, vector<int> left)
// {
//     vector<int> area;
//     vector<int> r = NSR();
//     vector<int> l = NSL();
//     vector<int> width;
//     for (int i = 0; i < size; i++)
//     {
//         width[i] = r[i] - l[i] - 1;
//     }

//     for (int i = 0; i < size; i++)
//     {
//         area[i] = arr[i] * width[i];
//     }
//     return area;
// }

// int main()
// {
//     vector<int> arr = {6, 2, 5, 4, 5, 1, 6};
//     vector<int> right = NSR();
//     vector<int> left = NSL();
//     vector<int> arr1 = MAH(arr, 7, right, left);

//     for (int i = 0; i < 7; i++)
//     {
//         cout << arr1[i] << endl;
//     }
//     cout << "this" << endl;
// }

///seperated

int MAH(int array[], int size)
{
    vector<int> right[7] = {NSR()};
    vector<int> left[7] = {NSL()};
    vector<int> width[i];
    vector<int> area[i];
    for (int i = 0; i < size; i++)
    {
        width[i] = right[i] - left[i] - 1;
    }
    for (int i = 0; i < size; i++)
    {
        area[i] = width[i] * array[i];
    }

    return *max_element(area, area + 7);
}

int main()
{
    int arr[] = {6, 2, 5, 4, 5, 1, 6};
    int size = 7;
    int Max = MAH(arr, size);
    cout << Max << endl;
}