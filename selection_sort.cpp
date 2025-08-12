// #include <bits/stdc++.h>
// using namespace std;

// void selection(int n, int ar[])
// {
    
//     for(int i = 0; i < n - 1; i++)
//     {
//         for(int j = i + 1; j < n; j++)
//         {
//             if(ar[i] > ar[j])
//             {
//                 swap(ar[i], ar[j]);
//             }
//             //  for(int i = 0; i < n; i++)
//             // {
//             //     cout << ar[i] << " ";        // Total step ber korar jonne use kori.
//             // }
//             // cout << endl;           
//         }
//     }
    
// }


//  int main() {
//     int n; cin >> n;
//     int ar[n];
//     for(int i = 0; i < n; i++)
//     {
//         cin >> ar[i];
//     }

//     selection(n, ar);

//      for(int i = 0; i < n; i++)
//             {
//                 cout << ar[i] << " ";           // Using for sorted.
//             }
//             cout << endl;
            
//   return 0;
//  }
// /* Input: 6
//         5 8 6 1 7 2

// Output: 1 2 5 6 7 8
// */

// // Selection Sort Algo:
#include <bits/stdc++.h>                // Header file.
using namespace std;

void selectionSort(int n, int ar[])     // Void type funcation. Void type means no return type.
{
    int count = 0;                      // Count use for how many step use in veriables.

    for (int i = 0; i < n ; i++)     // Outter loop using.
    {
        int mini = i;                   // i er value mini te thakbe.

        for (int j = i; j < n; j++) // Inner loop using
        {
            if (ar[j] < ar[mini])       // Condition Check. eikhne ar[j] jodi ar[mini] theke lom hoi tiale condition e dhukbe.
            {
                mini = j;           // Jkn condition true tkn e j er value mibi te update hbe.
            }
        }

        if (mini != i)              // jodi condition e mini and i alada hoi tkn codition true hbe and swap hbe.
        {
            swap(ar[i], ar[mini]);      // Swap kore ar[mini] theke ar[i] te small elements k anbo.
            count++;                    // Swap sesh e 1 kore ++ kore barabo.
        }
    }


    for (int i = 0; i < n; i++)
    {
        if(i > 0)               // Condition use and i er value 0 theke boro hole space print korbe.
        {
            cout << " ";
        }
        cout << ar[i];           // loop using kore sorted array print korbo.
    }
    cout << endl;
    cout << count << endl;              // Total swap print korbo.
}



int main()
{
    int n; cin >> n;             // Array te elements input nite use kori.
    int ar[n];                   // Declear n size array. 
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];           // Using loop for array input from user.
    }

    selectionSort(n, ar);       // Call selecion funcation.

    return 0;
}
