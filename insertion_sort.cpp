// Insertion Sort:
#include <bits/stdc++.h>                // Header file.
using namespace std;

void insertion(int n, int ar[])         // Insretion sort function.
{
    for (int i = 0; i < n; i++)        // For picking the values.
    {
        int M = ar[i];                  // Alwyas declear present value.
        int j = i - 1;                  // Compare the previous elements.

        while (j >= 0 && ar[j] > M)         // Loop condition.
        {
            swap(ar[j + 1], ar[j]);         // Swap in the two elements.
            j--;
        }
        ar[j + 1] = M;                  // Picked elements in the correct position.

        for (int i = 0; i < n; i++)
        {
            cout << ar[i] << " ";       // Using loop and find Output.
        }
        cout << endl;                   // Line braek.
    }
}

int main()
{
    int n;                      //Array size input for users.
    cin >> n;
    int ar[n];                  // Declear in Array.
    for (int i = 0; i < n; i++)     // Using loop and input from users.
    {
        cin >> ar[i];
    }
    insertion(n, ar);               //Insretion function calling.

    return 0;
}







// Another Process:
/* #include <bits/stdc++.h>            // Header file
using namespace std;


void insertion(int n, int A[])      // Insertion Sort Function
{
    for (int i = 1; i < n; i++) 
    {           
        int key = A[i];               // present value dhora.
        int j = i - 1;                // Compare ager elements er ste.

        
        while (j >= 0 && A[j] > key) {      // Condition check kore. Jekono akta false holei false. 
            A[j + 1] = A[j];               // A[j] er elements 1 ghor pisanu.
            j--;
        }
        A[j + 1] = key;               // key er exacet jaigai bosanu.

        
        for (int k = 0; k < n; k++) {       // Using loop and find Output.
            cout << A[k];
            if (k < n - 1) cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;               // Input from users.
    int A[n];               // Declaer array.
    for (int i = 0; i < n; i++) {
        cin >> A[i];                // Using loop and input from loop.
    }

    for (int i = 0; i < n; i++) {
        cout << A[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;


    insertion(n, A);        // Insertion sort calling.

    return 0;
}

*/
