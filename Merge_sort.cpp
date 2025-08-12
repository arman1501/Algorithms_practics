// // Merge Sort Algo:
// #include <bits/stdc++.h>        // All headr file.
// using namespace std;

// const int INF = INT_MAX; // Sentinel value
// int Count = 0;          // Total swap calcutation in Count veriables for Global veriables.

// void Merging( int L, int mid, int H, int ar[])      // Merge two sub array sorted to function.
//     {
//         int m = mid - L + 1;            // 1st sub array er size hisebe kaj kore.
//         int n = H - mid;                // 2nd sub array er size hisebe kaj kore.
//         int A[250001], B[250001];             // ar[] er value store kore 2 ta sub array create kore.

//         for(int i = 0; i < m; i++)
//         {
//             A[i] = ar[L + i];           // Loop use kore A[i] er moddhe ar[L + i] er elements rakhe.
//         }

//         for(int j = 0; j < n; j++)
//         {
//             B[j] = ar[mid + 1 + j];     // Loop use kore B[j] er moddhe ar[L + i] er elements rakhe.
//         }

//         A[m] = INF;
//         B[n] = INF;


//         int i = 0, j = 0;       // Position of 2 array elements.


//         // while(i < m && j < n)           // Using while loop and check condition.
//         // {
//         //     if(A[i] <= B[j])         // Condition true hole if condition er moddhe dhukbe.
//         //     {
//         //         ar[k] = A[i];       // ar[k] er moddhe A[i] er all element rakhbo.
//         //         i++;                
//         //         k++;                // i, k, count ++ kore barabo and count++ hoye global e int type count versibale e count hbe.
//         //         Count++;
                
//         //     } 
//         //     else                // Condition ture nh hole else condition e asbe.
//         //     {
//         //         ar[k] = B[j];   // ar[k] er moddhe B[j] er all element rakhbo.
//         //         j++;
//         //         k++;
//         //         Count++;        // i, k, count ++ kore barabo and count++ hoye global e int type count versibale e count hbe.
//         //     }
            
//         // }

//        for (int k = L; k <= H; k++) {       // Using loop and check condition
//         Count++;                        // Compariging count kore.
//         if (A[i] <= B[j]) {
//             ar[k] = A[i];
//             i++;
//         } else {                // Jodi condition true nh hoi taile else condition kaj kore.
//             ar[k] = B[j];
//             j++;
//         }
//     }

// }       
        
    
// void MergeSort(int L, int H, int ar[])      //Recursive MergeSort function calling.
//     {
//         if(L < H)           // Using condition.
//         {
//             int mid = (L + H) / 2;          // Find middle index.
//             MergeSort(L, mid, ar);          // Recursive kore sort kore left er half count korbo.
//             MergeSort(mid + 1, H, ar);      // Recursive kore sort kore right er half count korbo.
//             Merging(L, mid, H, ar);         // 2 ta msorted kore merge korbo.
//         }
//     }



//  int main() {
//     int n; cin >> n;                // Input a numbers of elements.
//     int ar[n];                  // Declear array elements.
//     for(int i = 0; i < n; i++)      // Input array using loop.
//     {
//         cin >> ar[i];
//     }


//     MergeSort(0, n - 1, ar);         // Call MergeSort in array.


//     for(int i = 0; i < n; i++)      // Using loop and print sorted array value.
//     {
//         cout << ar[i] << " ";       
//     }
//      cout << endl;              // when a programme print  end all elementsthen create a new line.

//      cout << Count << endl;         // print total swap numbers.


//   return 0;                 // Programme end.
//  }


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
