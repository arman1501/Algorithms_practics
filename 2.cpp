#include <bits/stdc++.h>        // All header file.
using namespace std;


struct arr {       // Strcuture define and store w, p, r.
    int w, p;
    double r;
};


bool cmp(arr a, arr b)          // Ration onujayi sort kori items gulo.
{
    return a.r > b.r;       // Sob theke high ratio age asbe.
}


void knap(arr a[], int n, int cap)      // Use greedy function and calculate maximum profit.
{
    double ans = 0.0;           // variable to store profit.

    for (int i = 0; i < n; i++)     // Using loop 
    {
        if (cap >= a[i].w)      // Condiiton use kori and true hole condition e jbe. or else e kaj korbe.
        {
            cap -= a[i].w;      // Reduce capacity.
            ans += a[i].p;      // Full profit add kori.
        }
        else        // If condition ture nh hole else e ashe and else condiiton e kaj korbe.
        {
            ans += a[i].p * ((double)cap / a[i].w);         // Fractional proift nibo.
            break;          // capacity khali nh thakle break diy stop kori.
        }
    }

    cout << "Total profit: " << ans << endl;        // print total profit.
}

int main() {            // Main function.
    
    int n = 3, cap = 50;           // 3 items anad 50 knapsack capacity.
    arr a[3] = {
        {10, 50, 0},        //Item-1 = weight=10, profit=50
        {15, 80, 0},       //Item-2 = weight=20, profit=80
        {20, 100, 0}        //Item-3 = weight=30, profit=100
    };

    for (int i = 0; i < n; i++) 
    {
        a[i].r = (double)a[i].p / a[i].w;         // Calculate profit-to-weight ratio for each item
    }

    sort(a, a + n, cmp);            // Sort korbo items gulo. high to low te.
    knap(a, n, cap);            // Call greedy function.

    return 0;           // End the program.
}
