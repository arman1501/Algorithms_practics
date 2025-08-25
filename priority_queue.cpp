/*
// *** Priority Queue ***

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

}
*/
