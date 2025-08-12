#include<bits/stdc++.h>
using namespace std;

int main()
{

    priority_queue<int>maxHeap;

    maxHeap.push(50);
    maxHeap.push(15);
    maxHeap.push(20);
    maxHeap.push(60);

//    while(maxHeap.size() > 0)
//    {
//        cout<<maxHeap.top()<<" ";
//        maxHeap.pop();
//    }

    priority_queue<int, vector<int>, greater<int> >minHeap;
    minHeap.push(20);
    minHeap.push(15);
    minHeap.push(40);
    minHeap.push(25);

    while(minHeap.size() > 0)
    {
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }
    cout << endl;




//    vector<int>v[10]; //1D Array //dynamic // Created with linked list but act as an array
//
//    v[4].push_back(10);
//    v[4].push_back(20);
//    for(int i = 0; i < v[4].size(); i++)
//    {
//        cout<<v[4][i]<<" ";
//    }

//    vector<string>s(5);
//    vector<float>f[7];
//    vector<vector<string> >ch;




}
