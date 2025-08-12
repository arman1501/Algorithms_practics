#include <bits/stdc++.h>            // All header file.
using namespace std;

// Insertion sort function use.
void insertionSort(int arr[], int n)         // void type function called.
{     
    for (int i = 1; i < n; i++)         // Using loop.
    {           
        int key = arr[i];           // insert korbo current item k.
        int j = i - 1;

        while (j >= 0 && arr[j] > key)      // while loop calabo joto khon nah key theke j & arr[j] er elements boro hoi.
        {
            arr[j + 1] = arr[j];        // Right e large item shift korbo.
            j--;                   // j er value j-- kore komabo.
        }
        arr[j + 1] = key;   // key k correct position e bosabo.
    }
}

// Selection sort function use.
void selectionSort(int arr[], int n)        // void type function called.
{
    for (int i = 0; i < n - 1; i++)     //Using loop
    {
        int min = i; // 1st e dhorbo i hocce sobar theke small.
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min])         // Condition calabo and jkn arr[j] theke arr[min] er element choto hbe tkn e codition cholbe.
            {
                min = j;        // New small element pele index update korbo.
            }
        }
    
        swap(arr[i], arr[min]);     // Swap kore sob theke small jeta takhe samne niye asbo.
    }
}

// Bubble sort function use.
void bubbleSort(int arr[], int n)       // void type function calling.
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++)         // Nested loop use.
        {
            if (arr[j] > arr[j + 1])        // Use condition if condition true then swap work.
            {
                swap(arr[j], arr[j + 1]);       // Swap kore sob theke boro je tare right e sorabo.     
            }
        }
    }
}

// Quick sort function using.
int partition(int arr[], int low, int high)         // int type function called.
{
    int pivot = arr[high];      // last element k pivot dhori.
    int i = low - 1;

    for (int j = low; j < high; j++) 
    {
        if (arr[j] < pivot)         // Condition use korci and pivot er value besi hole condition kaj korbe.
        {
            i++;
            swap(arr[i], arr[j]);       // Swap kore small element samne niye asbo.
        }
    }
    swap(arr[i + 1], arr[high]);        // Swap kore pivot k tar asol position e bosanu.
    return i + 1;           // return new pivot address.
}



void quickSort(int arr[], int low, int high) 
{
    if (low < high)         // condition use kore dekhbo jodi low small hoi high theke tahole condition kaj korbe.
    {
        int pi = partition(arr, low, high);         // Divide pivot.
        quickSort(arr, low, pi - 1);        // Sort kori left side.
        quickSort(arr, pi + 1, high);       // Sort kori right side.
    }
}


// Merge sort fucntion use.
void merge(int arr[], int left, int mid, int right) 
{
    int n1 = mid - left + 1;        // Size of left side.
    int n2 = right - mid;           // Size of right side.

    int L[100], R[100];         // Create 2 arrray.

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];       // Copy array from main array.
    }

    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];        // Copy array from main array.
    }

    int i = 0, j = 0, k = left;


    while (i < n1 && j < n2)        // Merge 2 array in one time.
    {
        if (L[i] <= R[j])       // use condition.
        {
            arr[k++] = L[i++];
        }
        else                // If condition kaj nah korle else e asbe. anad condition check kre dekhbe.
        {
            arr[k++] = R[j++];
        }
    }

    
    while (i < n1)              // Jodi left e kicu thake to kaj korbe.
    {
        arr[k++] = L[i++];
    }

    while (j < n2)          // Jodi right e kicu thake to kaj korbe.
    {
        arr[k++] = R[j++];
    }
}


void mergeSort(int arr[], int left, int right)      // Called marge sort function
{
    if (left < right)           // Condition use and check condition.
    {
        int mid = (left + right) / 2;      // Middle divide kori.
        mergeSort(arr, left, mid);      // Sort kori left sidde.
        mergeSort(arr, mid + 1, right); // Sort kori right side
        merge(arr, left, mid, right);   // Akn merge korci.
    }
}



void print_array(int arr[], int n)      // Array print function calling.
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";      // Print output.
    cout << endl;
}


// Main Function.
int main() 
{
    int t; cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++)      
    {
        cin >> arr[i];      // Using loop and input array from users.
    }
    
    int n = sizeof(arr) / sizeof(arr[0]);       // Array length ber kori.
    int temp[100];      // Temporary array define.


    copy(arr, arr + n, temp);
    insertionSort(temp, n);
    cout << "Insertion Sort: ";         // Insretion sort print.
    print_array(temp, n);

    copy(arr, arr + n, temp);
    selectionSort(temp, n);
    cout << "Selection Sort: ";         // Selection sort print.
    print_array(temp, n);

    copy(arr, arr + n, temp);
    bubbleSort(temp, n);
    cout << "Bubble Sort: ";            // Bubble sort print.
    print_array(temp, n);

    copy(arr, arr + n, temp);
    quickSort(temp, 0, n - 1);
    cout << "Quick Sort: ";             // Quick sort print.
    print_array(temp, n);

    copy(arr, arr + n, temp);
    mergeSort(temp, 0, n - 1);
    cout << "Merge Sort: ";             // Merge sort print.
    print_array(temp, n);

    return 0;           // End the program.
}
