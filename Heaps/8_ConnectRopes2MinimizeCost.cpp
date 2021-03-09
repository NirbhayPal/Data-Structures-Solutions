#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> minh;
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        minh.push(arr[i]);
    }
    int first;
    int sec;
    int TSum;
    int TCost=0;
    while (minh.size()>=2)
    {
        first = minh.top();
        minh.pop();
        sec = minh.top();
        minh.pop();
        TSum=first+sec;
        TCost=TCost+TSum;
        minh.push(TSum);

    }
    cout<<TCost;
}