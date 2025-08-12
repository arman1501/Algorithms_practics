// Bubbble Sort Algo:
#include <bits/stdc++.h>        // All header file.
using namespace std;

 int main() {
    int n; cin >> n;            // n type input from user.
    int ar[n];                  // Declear n type array.
    int count = 0;              // Total swap count kore.

    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];             // Using loop and input from users.  
    }


    for(int i = 0; i < n; i++)      // prottek step e big numbers gula pisone nibo.
    {
        for(int j = n -1; j >= i; j--)          // Right to left e jbo.
        {
            if(ar[j] < ar[j - 1])          // Jodi condition ture hoi taile condition er moddhe dhuke swap korbe.
            {
                swap (ar[j], ar[j - 1]);        // Swap korbe.
                count++;            //Swap howar por 1++ kore barbe.
            }
        }
    }


    for(int i = 0; i < n; i++)
    {
        cout << ar[i];          // 1 numbers print korbe.
        if(i != n -1)       // Condition true hole codition er moddhe jbe.
        {
            cout << " ";        // Condition true hole akta space nibe.
        }
    }
    cout << endl;           // When all numbers print done then this code create a new line.
    cout << count << endl;          // Total swap numbers counting.

  return 0;         // End programme.
 }
