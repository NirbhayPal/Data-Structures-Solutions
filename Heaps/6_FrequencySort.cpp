#include<iostream>
using namespace std;
#include <bits/stdc++.h>
#include<queue>
#include<map>
#include<iterator>

int main(){
    int i;
int arr[]={1,1,1,3,2,2,4};

    priority_queue<pair<int,int>> maxh;
    unordered_map<int,int> mp;
    for ( i = 0; i < 7; i++)
    {
        mp[arr[i]]++;
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        maxh.push({i->second,i->first});
    }
    
    while (maxh.size()!=0)
    {
        int element=maxh.top().second;
        int freq = maxh.top().first;
        for ( i = 0; i < freq; i++)
        {
            cout<<maxh.top().second<<endl;
        }
        maxh.pop();
    }
    
}
