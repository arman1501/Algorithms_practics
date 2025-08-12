// Qucik Sort Algorithm.
#include <bits/stdc++.h>        // All header file including.
using namespace std;

const int MAX = 100000;         //Fixed veriable int type declear.

char A[MAX];    // suit of card (S, H, D, C)
int B[MAX];     // number of card
int pos[MAX];   // card er original position

void swapCards(int i, int j) {          // Two function ak ste call koraar function.
    
    char tempChar = A[i];
    A[i] = A[j];                    // Eita suit swap korar jonnne use korci.
    A[j] = tempChar;

   
    int tempInt = B[i];
    B[i] = B[j];                // Number swap korar jonne use korci.
    B[j] = tempInt;

    
    int tempPos = pos[i];
    pos[i] = pos[j];            // Orginal positions swap korar jonne use korci.
    pos[j] = tempPos;
}


int partition(int low, int high) {      // Partition function ja pivot nirdharon kore and array k divide kore.
    int pivot = B[high];           // Last card er number k pivot dhorci.
    int i = low - 1;        //Pivot er soman or small number sesh e rakhar program.

    for (int j = low; j < high; j++) {      // USing loop and condition check.
        if (B[j] <= pivot) {        // Jodi card er number pivot theke small or equal hoi tai i++ hbe.
            i++;
            swapCards(i, j);    // Swap card i and j korci.
        }
    }
    swapCards(i + 1, high);     // correct position at place pivot.
    return i + 1;           // Pivot index return korci.
}

void quicksort(int low, int high) {     // Qucik sort function calling and recursive array suit korci.
    if (low < high) {           // Cindition use kore jodi true hoi taile bitore kaj korbe.
        int q = partition(low, high);       // Partition kore pivot index korci.
        quicksort(low, q - 1);          // Pivot er age section recursive kore sort korci.
        quicksort(q + 1, high);     //Pivot er pore section recursive kore sort korci.
    }
}

int main() {
    int n; cin >> n;  // Input numbers of cards from users.

    for (int i = 0; i < n; i++) {
        cin >> A[i] >> B[i];        // using loop and input suit numbers and position.
        pos[i] = i;         // Orginal posiiton store korci.
    }

    quicksort(0, n - 1);        // Run quicksort.

    bool stable = true;             // Stability check korci.
    for (int i = 1; i < n; i++) {           // USing loop and check codition.
        if (B[i] == B[i - 1] && pos[i - 1] > pos[i]) {
            stable = false;   //If two cards have same value but order changed, not stable)
            break;              // Close program.
        }   
    }

    cout << (stable ? "Stable" : "Not stable") << "\n";         // Print output stable or not stable.

    for (int i = 0; i < n; i++) {
        cout << A[i] << " " << B[i] << "\n";        // Sajanu card print korci.
    }

    return 0;               // End program.
}
