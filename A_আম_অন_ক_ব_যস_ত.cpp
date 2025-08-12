//Code : A
#include <bits/stdc++.h>        // All hearder file.
using namespace std;

int main()          // Main function use.
{
    int t; cin >> t;        // Input from users.

    while (t--)         //Loop last porjinto cholbe jotogula test case ache.
    {
        int n; cin >> n;       // Per test case er jonne input activities.

        vector<pair<int, int>> a(n);      // vector of pair use korci. end time first, then start time


        for (int i = 0; i < n; i++)     // Loop use.
        {
            int s, e;           // Declear 2 int type variables.
            cin >> s >> e;      // Input from useers.
            a[i] = make_pair(e, s);  // end time ke pair-er first element banabo
        }


        sort(a.begin(), a.end());  // end time onujayi sort hobe (default sorting)

        int count = 1;       // 1st activity count korchi.
        int last = a[0].first;   // last variable e 1st kaj er end time dhore rakhci.


        for (int i = 1; i < n; i++)         // Use loop.
        {
            if (a[i].second >= last)  // Condition use kore check korbo current start >= last end
            {
                count++;        // Condition true hole Count++ kore barbe.
                last = a[i].first;      // last er moddhe latest end time update korci.
            }
        }

        cout << count << endl;      // Print count value.
    }

    return 0;       // End the program.
}
