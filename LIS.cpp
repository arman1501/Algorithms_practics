#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int list[n];
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }

    int LIS[n], Track[n];
    memset(Track, -1, sizeof(Track));

    for (int i = 0; i < n; i++)
    {
        LIS[i] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (list[j] < list[i])
            {
                LIS[i] = max(LIS[i], 1 + LIS[j]);   // For LIS Length --
                
                if(LIS[i] == 1 + LIS[j])        // For tracking --
                {
                    Track[i] = j;
                } 
            }
        }
    }

    // Print LIS --
    for (int i = 0; i < n; i++)
    {
        cout << LIS[i] << " ";
    }
    cout << endl;

    // Print LIS length --
    int max = INT_MIN, ind;
    for(int i = 0; i < n; i++)
    {
        if(max < LIS[i])
        {
            max = list[i];
            ind = i;
        }
    }
    cout << "LIS Length = " << max << endl;


    // Print Tracking --
    for(int i = 0; i < n; i++)
    {
        cout << Track[i] << " ";
    }
    cout << endl;

    // Print Subsequence --
    vector<int>ans;
    for(int i = ind; i >= 0; )
    {
        ans.push_back(list[i]);
        i = Track[i];
    }

    cout << "Subsequence = ";           // Subsequence print --

    for(int i = ans.size() -1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

/*

Test case : 7
From user : 3 4 -1 0 6 2 3
LIS : 1 2 1 2 3 3 4 
LIS Length = 3
Tracker : -1 6 -1 2 3 3 5 
Subsequence = -1 0 2 3 
*/

