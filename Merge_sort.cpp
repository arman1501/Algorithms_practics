/*
3) *** Merge Sort ***

#include <bits/stdc++.h>        // All Header file
using namespace std;

const int INF = INT_MAX; // Sentinel value
long long Count = 0;          // Comparison count.

void Merging(int L, int mid, int H, int ar[]) {     // Funciton calling.
    int m = mid - L + 1;   // Left subarray size
    int n = H - mid;       // Right subarray size

    int A[m + 1], B[n + 1];  //Sentinel rakher jonne 1+ kore disi. 

    for (int i = 0; i < m; i++) {       // Loop using for A[] left subarray elements copy
        A[i] = ar[L + i];
    }
    for (int j = 0; j < n; j++) {       // Loop using for A[] left subarray elements copy
        B[j] = ar[mid + 1 + j];
    }

    A[m] = INF;  // Sentinel
    B[n] = INF;  // Sentinel

    int i = 0, j = 0;           // Two subarray index.

    for (int k = L; k <= H; k++) {      // Merge array process and compare two subarray.
        Count++;            // Count 1++ kora hbe protibar.     

        if (A[i] <= B[j]) {         // Use condition and check. jodi condition true hoi tahole ar[k] er moddhe A[i] er value bosbe.
            ar[k] = A[i];
            i++;            // i++ kore barabo jodi condiiton true hoi.
        } else {                // Condition true nah hole else kaj korbe.
            ar[k] = B[j];
            j++;            // j++ kore barabo.
        }
    }
}

void MergeSort(int L, int H, int ar[]) {          // Merge sort calling.
    if (L < H) {
        int mid = (L + H) / 2;          // Find mid point.
        MergeSort(L, mid, ar);          // left theke recursive kore sajanu hbe subarray k
        MergeSort(mid + 1, H, ar);      // right theke recursive kore sajanu hbe subarray k.
        Merging(L, mid, H, ar);         // Combine two sub array
    }
}

int main() {
    int n; cin >> n;            //input in n elements.
    int ar[n];              // Declear array.
    for (int i = 0; i < n; i++) {
        cin >> ar[i];               // Using loop and input from users.
    }

    MergeSort(0, n - 1, ar);            // Function call in full array.

    for (int i = 0; i < n; i++) {
        cout << ar[i];
        if(i < n - 1)
        {
          cout  << " ";           //Using loop and print output.
        } 
    }
    cout << "\n";
    cout << Count << "\n";        // Total comparing print.

    return 0;               // End program.
}   
*/
