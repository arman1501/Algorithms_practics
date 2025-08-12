//Code: D
#include <bits/stdc++.h>
using namespace std;

 int main() {
    int n, m; cin >> n >> m; // n = number of student and  m = minimum number of participants left.

    int count = 0; // the count for eligible students number.

    for (int i = 0; i < n; i++)  //Use loop.
    { 
        int t; cin >> t; // input nibo koto bar 1 jon student already parcipant korece.

        int parti = 5 - t;  // Student r koto bar participate nite parbe.

        if (parti >= m)         // Condition check and jodi condition true hoi taile vitore jbe.
        {
            count++;        // jodi student at last m times join kore taile count++ kore barabo.
        }
    }

    int teams = count / 3;      // 3 person e 1 team hbe.
    cout << teams << endl;      // Print total teams.

  return 0;         // End the program.
 }
