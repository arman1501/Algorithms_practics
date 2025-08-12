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

//  Insertion code is my favorite code:
// Out of all the sorting algorithms, this version of insertion sort stands out as my favorite.
// Its logic is simple yet powerful — it carefully places each element in its correct position step by step.
// What I find most useful is how it displays the array after every pass, giving a clear picture of the sorting process.
// This makes it both practical and a great learning tool.
// I also appreciate that it sticks to the fundamentals like loops and swapping,
// which really helps solidify my core understanding of how sorting works internally.
