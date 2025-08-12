//Code : F
#include <bits/stdc++.h> //All header file.
using namespace std;

int main() 
{
    int n, c; cin >> n >> c;  // input from users n and c.

    int arr[100];         // Define array size.
    for (int i = 0; i < n; i++)      // Loop using.
    {
        cin >> arr[i];        // Input from array. 
    }

    int count = 0;  // base count 0 dhore nibo

    for (int i = 0; i < n - 1; i++)         // Using loop.
    {
        int profit = arr[i] - arr[i + 1] - c;  //Using fromulas.
        if (profit > count)         // USing condition and profit jodi count theke boro hoi taile condition true.
        {
            count = profit;  //Count e profit er value giye bosbe.
        }
    }

    if (count < 0) // Count jodi 0 theke small hoi tahole count 0 e hbe.
    {
        count = 0;
    }

    cout << count << endl;  //print output.

    return 0;       // End the program.
}

