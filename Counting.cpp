//Counting Sort Algorithm.
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;   // Input number of elements.

    int A[n];          // Declear an array.
    int max = 0;        // Searceh a big elements and store Max variable.


    for (int i = 0; i < n; i++) {       //Using loop and input from users
        cin >> A[i];
        if (A[i] > max) {           // Condition use. Condition true hole max er moddhe A[i] er value store hbe.
            max = A[i]; 
        }
    }

   
    int C[max + 1];
    for (int i = 0; i <= max; i++) {        // using loop condition.
        C[i] = 0;               // C[i] store korbe count.
    }


    for (int i = 0; i < n; i++) {   //Using loop and count each number of A.
        C[A[i]]++;          // Increase count of A[i].
    }

    
    for (int i = 1; i <= max; i++) {        //Using loop condition.
        C[i] = C[i] + C[i - 1];  //  C[i] hold count of i.
    }

    
    int B[n];       // Output array (sorted result rakhar jonne.


    for (int i = n - 1; i >= 0; i--) {
        B[C[A[i]] - 1] = A[i];          //Place A[i] at cirrect index.
        C[A[i]]--;          //count komabo.
    }

    
    for (int i = 0; i < n; i++) {
        cout << B[i];               //Sorted print kora.
        if (i != n - 1)         // Use condition and print space.
            cout << " ";
    }

    cout << endl;           // print new line/
    return 0;       // End program.
}
