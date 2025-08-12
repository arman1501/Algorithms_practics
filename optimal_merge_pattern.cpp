#include<bits/stdc++.h>
using namespace std;

int optimalmerge(vector<int>files)
{
    priority_queue<int, vector<int>, greater<int> >minHeap;
    for(int i = 0; i < files.size(); i++)
    {
        minHeap.push(files[i]);
    }

    int totalcost = 0;
    while(minHeap.size() > 1)
    {
        int first = minHeap.top();
        minHeap.pop();
        int second = minHeap.top();
        minHeap.pop();

        int mergecost = first+second;
        totalcost = totalcost + mergecost;

        minHeap.push(mergecost);
    }
    cout<<minHeap.top()<<endl;
    return totalcost;
}

int main()
{
    vector<int>files={10, 20, 30, 5, 30};

    int cost = optimalmerge(files);

    cout<<"Minimum Cost: "<<cost<<endl;
}
