// Fractional Knapsack Algorithm:
#include <bits/stdc++.h>
using namespace std;

 struct knap{

    int object;
    double PbW;
 };


 bool comparePbW(knap n1, knap n2)
 {
    if(n1.PbW > n2.PbW) return true;
    else return false;
 }


int main() {
    int n, m; cin >> n >> m;
    int profit[n];
    int weights[n];

    for(int i = 0; i < n; i++)
    {
        cin >> profit[i];
    }

    for(int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }

    knap sack[n];
    for(int i = 0; i < n; i++)
    {
        sack[i].object = i;
        sack[i].PbW = double(profit[i]) / double(weights[i]);
    }


    sort(sack, sack + n, comparePbW);


    int RW = m;
    int i = 0;
    double X[n];
    memset(X, 0.0, sizeof(X));

    while(RW > 0)
    {
        if(RW >= weights[sack[i].object])
        {
            X[sack[i].object] = 1;
            RW = RW - weights[sack[i].object];
            i++;
        } else{
            X[sack[i].object] = double(RW) / double(weights[sack[i].object]);
            RW = 0;
        }
    }


    for(int i = 0; i < n; i++)
        {
            cout << X[i] << " ";
        }
        cout << endl;


        double max_profit = 0;
        for(int i = 0; i < n; i++)
        {
            max_profit = max_profit + (X[i] * double(profit[i]));
        }
        cout << max_profit << endl;

  return 0;
 }



 /* 
 Input : 7 15
            10 5 15 7 6 18 3
            2 3 5 7 1 4 

Output : 
        1 0.666667 1 0 1 1 1 
        55.3333

*/
