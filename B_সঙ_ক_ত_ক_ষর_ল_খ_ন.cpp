#include <bits/stdc++.h> // All library header file.
using namespace std;

 int main() {           // main function in program.
   int n; cin >> n;  // Test case numbers and user theke input nilam.

    while (n--) {           // Joto bar tase case ache toto bar cholbe and n-- kore kombe.
        string s; cin >> s;    // s nam e akta string nicci and user theke input nicci.

        int count = 1;          // first charater 1 bar pawa gase dhore nicci. and pore same charater joto bar pawa jbe toto bar 1++ addition hbe total count numbers.
        for (int i = 1; i <= s.length(); i++) {   // loop chalabo and string e 2nd charater theke start hoye end porjonto check korbe. 
            if (s[i] == s[i - 1]) {         // Condition use korbo and ager charater and present charater jodi equal hoi taile count++ kore barabo.
                count++;
            } else {           
                cout << count << s[i - 1];  // R condition true nah hole else e asbe and ager charater ans count print korbo.
                count = 1;      // New count er jonne set korbo.
            }
        }
        cout << endl;               // New line create.
    } 

  return 0;         // Program end.
 }
