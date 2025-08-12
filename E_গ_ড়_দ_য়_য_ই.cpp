//E - গাড়ি দিয়ে যাই:
#include <bits/stdc++.h>        // All header file include.
using namespace std;

int main() {
    int n; cin >> n;        // Total numbrt of tast case.

    int child1 = 0, child2 = 0, child3 = 0, child4 = 0;     // Counting size of groups.
    for (int i = 0; i < n; i++)
    {
        int m; cin >> m;    //input nicci per group er.
        if (m == 1)     // Use condition and m = 1 hole child1++ kore barabo.
        {
            child1++;
        }
        else if (m == 2). // 1st condition true nh hole 2nd condition e asbe and m = 2 hole child2++ kore barabo.
        {
            child2++;
        }
        else if (m == 3)        // 2nd condition true nh hole 3rd condition e asbe and m = 3 hole child3++ kore barabo.
        {
            child3++;
        }
        else if (m == 4)      // 3rd condition true nh hole 4th condition e asbe and m = 4 hole child4++ kore barabo.  
        {
            child4++;
        }
    }

    int car = child4;       // 4 jon er group e alada car nibe.

    int person = min(child3, child1);       // Minimum 3 jon er group e 1 jon add kore bodabo.
    car += child3;              //Per group e 3 jon kore bosabo.
    child1 -= person;           // last w 1 jon e reduce kore dibo.

    car += child2 / 2;          // Per 2 ta 2 jon er group e 1 ta car thakbe.
    child2 %= 2;        // If 1 two-person group is left.

    if (child2 == 1)        // Use condition and if condition is true then car++ kore barabo.
    {
        car += 1;
        child1 -= min(2, child1);       //Add upto rwo personf groups.
    }

    if (child1 > 0)
    {
        car += (child1 + 3) / 4;        // Last 1 jon er groupe 4 jon person jonne 1 car.
    }

    cout << car << endl;        // print total car needed.

  return 0;         // End the program.
 }
