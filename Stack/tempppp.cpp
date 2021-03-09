#include <iostream>
#include <stack>
#include <vector>
#include <bits/stdc++.h>


using namespace std;
int i;
int main()
{
vector<int> right = {};
    int arr[] = {6,2,5,4,5,1,6};
    int size = 7;
    int pseudo_value = 7;

    stack<pair<int,int>> s;

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
        else if (s.size() > 0 && s.top().first>=arr[i])
        {
            while (s.size()>0 && s.top().first >= arr[i])
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
        s.push({arr[i],i});
    }
    reverse(right.begin(), right.end());
    
    for (i = 0; i < right.size(); i++)
        cout << right[i] << " ";
    cout << endl;
}