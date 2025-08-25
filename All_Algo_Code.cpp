/*

1) **** Insertion Sort *****

#include <bits/stdc++.h>
using namespace std;

void insertion(int n, int ar[])
{
    for (int i = 0; i < n; i++)
    {
        int M = ar[i];
        int j = i - 1;

        while (j >= 0 && ar[j] > M)
        {
            swap(ar[j + 1], ar[j]);
            j--;
        }
        ar[j + 1] = M;

        for (int i = 0; i < n; i++)
        {
            cout << ar[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    insertion(n, ar);

    return 0;
}


/*

2) *** Selection Sort ***


#include <bits/stdc++.h>
using namespace std;

void selection(int n, int ar[])
{
    
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(ar[i] > ar[j])
            {
                swap(ar[i], ar[j]);
            }
             for(int i = 0; i < n; i++)
            {
                cout << ar[i] << " ";        // Total step ber korar jonne use kori.
            }
            cout << endl;           
        }
    }
    
}


 int main() {
    int n; cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    selection(n, ar);

     for(int i = 0; i < n; i++)
            {
                cout << ar[i] << " ";           // Using for sorted.
            }
            cout << endl;
            
  return 0;
 }
/* Input: 6
        5 8 6 1 7 2

Output: 1 2 5 6 7 8
*/


// Method 2 number:

/*

#include <bits/stdc++.h>     
using namespace std;

void selectionSort(int n, int ar[])    
{
    int count = 0;                   

    for (int i = 0; i < n ; i++)    
    {
        int mini = i;                  

        for (int j = i; j < n; j++) 
        {
            if (ar[j] < ar[mini])     
            {
                mini = j;           
            }
        }

        if (mini != i)             

            swap(ar[i], ar[mini]);      
            count++;                   
        }
    }


    for (int i = 0; i < n; i++)
    {
        if(i > 0)             
        {
            cout << " ";
        }
        cout << ar[i];       
    }
    cout << endl;
    cout << count << endl;              
}


int main()
{
    int n; cin >> n;            
    int ar[n];                   
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];           
    }

    selectionSort(n, ar);      

    return 0;
}
*/

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

/*
4) *** Merging Sort ***

#include <bits/stdc++.h>
using namespace std;

void Merging(int A[], int B[], int C[], int m, int n)
    {
       int i = 0, j = 0, k = 0;
       while(i < m && j < n) 
       {
        if(A[i] < B[j])
        {
            C[k] = A[i];
            i++;
            k++;
        } else{
            C[k] = B[j];
            j++;
            k++;
        }


        for( ; i < m; i++)
        {
            C[k] = A[i];
            k++;
        }
        for( ; j < n; j++)
        {
            C[k] = B[j];
            k++;
        }

       }
    }



 int main() {
    int m, n; cin >> m >> n;
    int A[m], B[n];

    for(int i = 0; i < m; i++)
    {
        cin >> A[i];
    }
    for(int j = 0; j < n; j++)
    {
        cin >> B[j];
    }

    int C[m+n];


    Merging (A, B, C, m, n);


    for(int k = 0; k < m+n; k++)
    {
        cout << C[k] << " ";
    }
    cout << endl;

  return 0;
 }
*/






 /*
 5) *** Optimal Sort ***

#include<bits/stdc++.h>
using namespace std;

int optimalmerge(vector<int>files)
{
    priority_queue<int, vector<int>, greater<int> >minHeap;
    for(int i = 0; i < files.size(); i++)
    {
        minHeap.push(files[i]);
    }

    int totalcost = 0;
    while(minHeap.size() > 1)
    {
        int first = minHeap.top();
        minHeap.pop();
        int second = minHeap.top();
        minHeap.pop();

        int mergecost = first+second;
        totalcost = totalcost + mergecost;

        minHeap.push(mergecost);
    }
    cout<<minHeap.top()<<endl;
    return totalcost;
}

int main()
{
    vector<int>files={10, 20, 30, 5, 30};

    int cost = optimalmerge(files);

    cout<<"Minimum Cost: "<<cost<<endl;
}
 */







 /*
6) *** Priority Queue ***

#include<bits/stdc++.h>
using namespace std;

int main()
{

    priority_queue<int>maxHeap;

    maxHeap.push(50);
    maxHeap.push(15);
    maxHeap.push(20);
    maxHeap.push(60);

//    while(maxHeap.size() > 0)
//    {
//        cout<<maxHeap.top()<<" ";
//        maxHeap.pop();
//    }

    priority_queue<int, vector<int>, greater<int> >minHeap;
    minHeap.push(20);
    minHeap.push(15);
    minHeap.push(40);
    minHeap.push(25);

    while(minHeap.size() > 0)
    {
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }
    cout << endl;

}
*/





/*
// Fractional Knapsack Algorithm:
#include <bits/stdc++.h>
using namespace std;

 struct knap{

    int object;
    double PbW;
 };


 bool comparePbW(knap n1, knap n2)
 {
    if(n1.PbW > n2.PbW) return true;
    else return false;
 }


int main() {
    int n, m; cin >> n >> m;
    int profit[n];
    int weights[n];

    for(int i = 0; i < n; i++)
    {
        cin >> profit[i];
    }

    for(int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }

    knap sack[n];
    for(int i = 0; i < n; i++)
    {
        sack[i].object = i;
        sack[i].PbW = double(profit[i]) / double(weights[i]);
    }


    sort(sack, sack + n, comparePbW);


    int RW = m;
    int i = 0;
    double X[n];
    memset(X, 0.0, sizeof(X));

    while(RW > 0)
    {
        if(RW >= weights[sack[i].object])
        {
            X[sack[i].object] = 1;
            RW = RW - weights[sack[i].object];
            i++;
        } else{
            X[sack[i].object] = double(RW) / double(weights[sack[i].object]);
            RW = 0;
        }
    }


    for(int i = 0; i < n; i++)
        {
            cout << X[i] << " ";
        }
        cout << endl;


        double max_profit = 0;
        for(int i = 0; i < n; i++)
        {
            max_profit = max_profit + (X[i] * double(profit[i]));
        }
        cout << max_profit << endl;

  return 0;
 }



 /* 
 Input : 7 15
            10 5 15 7 6 18 3
            2 3 5 7 1 4 

Output : 
        1 0.666667 1 0 1 1 1 
        55.3333

*/






/*
// Fibonacci with Memoization:
#include <bits/stdc++.h>
using namespace std;

int fib(int n, int F[])
{
    if (n <= 1)
    {
        F[n] = n;
        return F[n];
    }

    if (F[n] == -1)
    {
        F[n] = fib(n - 1, F) + fib(n - 2, F);
    }

    return F[n];
}

int main()
{
    int n;
    cin >> n;
    int F[n + 1];
    memset(F, -1, sizeof(F));

    int result = fib(n, F);

    cout << result << endl;

    return 0;
}
*/




/*
//Fibonacci with Tablization
#include <bits/stdc++.h>
using namespace std;

int fib(int n, int F[])
{
    for(int i = 2; i <= n; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
    return F[n];
} 

int main() {
    int n; cin >> n;
    int F[n + 1];
    F[0] = 0;
    F[1] = 1;

    int ans = fib(n, F);


    cout << ans << endl;

  return 0;
 }
*/



/*
//**  DP Code **
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int profit[n];
    int weight[n];
    for (int i = 0; i < n; i++)
    {
        cin >> profit[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    int sack[n + 1][m + 1];
    for (int i = 0; i < n + 1; i++)
    {
        sack[i][0] = 0;
    }
    for (int j = 0; j < m + 1; j++)
    {
        sack[0][j] = 0;
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (weight[i - 1] > j)
            {
                sack[i][j] = sack[i - 1][j];
            }
            else
            {
                sack[i][j] = max(sack[i - 1][j], sack[i - 1][j - weight[i - 1]] + profit[i - 1]);
            }
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            cout << sack[i][j] << " ";
        }
        cout << endl;
    }

    cout << sack[n][m] << endl;
    int i = n, j = m;

    while (i > 0)
    {
        if (sack[i][j] == sack[i - 1][j])
        {
            i = i - 1;
            continue;
        }
        else
        {
            cout << "Product " << i << " is selected" << endl;
            j = j - weight[i - 1];
            i = i - 1;
        }
    }
}

*/




/*
// Coin. Change Problem:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int coin[n];

    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }

    long long int dp_coin[n + 1][m + 1];

    for (int i = 0; i < n + 1; i++)
    {
        dp_coin[i][0] = 0;
    }

    for (int j = 1; j < m + 1; j++)
    {
        dp_coin[0][j] = INT_MAX;
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (coin[i - 1] > j)
            {
                dp_coin[i][j] = dp_coin[i - 1][j];
            }
            else
            {
                dp_coin[i][j] = min(dp_coin[i - 1][j], 1 + dp_coin[i][j - coin[i - 1]]);
            }
        }
    }

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            cout << dp_coin[i][j] << " ";
        }
        cout << endl;
    }

    int i = n, j = m;
    while (i > 0)
    {
        while (dp_coin[i][j] != dp_coin[i - 1][j])
        {
            j = j - coin[i - 1];
            cout << coin[i - 1] << " is selected" << endl;
            continue;
        }
        i = i - 1;
    }

    return 0;
}

*/



/*
// LCS problem:
#include <bits/stdc++.h>
using namespace std;

 int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int n = s1.size();
    int m = s2.size();

    int LCS[n+1][m+1];

    for(int i = 0; i < n+1; i++)
    {
        LCS[i][0] = 0;
    }

    for(int j = 0; j < m+1; j++)
    {
        LCS[0][j] = 0;
    }


    for(int i = 1; i < n+1; i++)
    {
        for(int j = 1; j < m+1; j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                LCS[i][j] = 1 + LCS[i-1][j-1];
            } else{
                LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);
            }
        }
    }

    for(int i = 0; i < n+1; i++)
    {
        for(int j = 0; j < m+1; j++)
        {
            cout << LCS[i][j] << " ";
        }
        cout << endl;
    }

    //Scquence ber kora hoice nich theke.
    string ans;
    int i = n, j = m;

    while(i > 0)
    {
        if(s1[i-1] == s2[j-1])
        {
            ans.push_back(s2[j-1]);
            i = i - 1;
            j = j - 1;
        } else{
            if(LCS[i][j] == LCS[i-1][j])
            {
                i = i - 1;
            } else{
                j = j - 1;
            }
        }
    }


    for(int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }

  return 0;
 }

 */




 /*
// LIS Code : 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int list[n];
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }

    int LIS[n], Track[n];
    memset(Track, -1, sizeof(Track));

    for (int i = 0; i < n; i++)
    {
        LIS[i] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (list[j] < list[i])
            {
                LIS[i] = max(LIS[i], 1 + LIS[j]);   // For LIS Length --
                
                if(LIS[i] == 1 + LIS[j])        // For tracking --
                {
                    Track[i] = j;
                } 
            }
        }
    }

    // Print LIS --
    for (int i = 0; i < n; i++)
    {
        cout << LIS[i] << " ";
    }
    cout << endl;

    // Print LIS length --
    int max = INT_MIN, ind;
    for(int i = 0; i < n; i++)
    {
        if(max < LIS[i])
        {
            max = list[i];
            ind = i;
        }
    }
    cout << "LIS Length = " << max << endl;


    // Print Tracking --
    for(int i = 0; i < n; i++)
    {
        cout << Track[i] << " ";
    }
    cout << endl;

    // Print Subsequence --
    vector<int>ans;
    for(int i = ind; i >= 0; )
    {
        ans.push_back(list[i]);
        i = Track[i];
    }

    cout << "Subsequence = ";           // Subsequence print --

    for(int i = ans.size() -1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

/*

Test case : 7
From user : 3 4 -1 0 6 2 3
LIS : 1 2 1 2 3 3 4 
LIS Length = 3
Tracker : -1 6 -1 2 3 3 5 
Subsequence = -1 0 2 3 
*/





/*
// Adjancy Metrix:
#include <bits/stdc++.h>
using namespace std;

 int main() {
   int node, edge; cin >> node >> edge; 

   int graph[node + 1][node + 1];
   memset(graph, 0, sizeof(graph));

    int u, v, w;
   for(int i = 1; i <= edge; i++)
   {
        cin >> u >> v >> w;
        graph[u][v] = w;
        graph[v][u] = w;
   }

   for(int i = 1; i <= node; i++)
   {
        for(int j = 1; j <= node; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

  return 0;
 }
*/



/*
//Adjancy list:
#include <bits/stdc++.h>
using namespace std;

 int main() {
   int node, edge; cin >> node >> edge;
   
   vector<int>graph[node + 1];

   int u, v;
   for(int i = 1; i <= edge; i++)
   {
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
   }

   for(int i = 1; i <= node; i++)
   {
    cout << i << " -> ";
    for(int j = 0; j < graph[i].size(); j++)
    {
        cout << graph[i][j] << " ";
    }
    cout << endl;
   }

  return 0;
 }
*/





/*
//Adjancy list with pair:
#include <bits/stdc++.h>
using namespace std;

 int main() {
   int node, edge; cin >> node >> edge;
   
   vector<pair<int, int> >graph[node + 1];

   int u, v, w;
   for(int i = 1; i <= edge; i++)
   {
    cin >> u >> v >> w;
    graph[u].push_back(make_pair(v, w));
    graph[v].push_back(make_pair(u, w));
   }

   for(int i = 1; i <= node; i++)
   {
    cout << i << " -> ";
    for(int j = 0; j < graph[i].size(); j++)
    {
        cout << " (" << graph[i][j].first << " " << graph[i][j].second << ") ";
    }
    cout << endl;
   }

  return 0;
 }
*/




/*
//DFS with stack AM:

#include <bits/stdc++.h>
using namespace std;
int graph[1001][1001];
int visit[1001];
int n, e;

// For DFS with Stack meethod.
void DFS_Stk (int start)        
{
    //Initial Step:
    visit[start] = 1;
    cout << start << " ";
    stack <int> S;
    S.push(start);

    //Repeating Step:
    while (!S.empty())
    {
        for(int j = 1; j <= n; j++)
        {
            int x = S.top();
            if(visit[j] == 0 && graph[x][j] != 0)
            {
                visit[j] = 1;
                cout << j << " ";
                S.push (j);
                j = 1;
            }
        }
        S.pop ();
    }
    
}

// For DFS with Recursion method.
void DFS_Rec (int start)        
{
    visit[start] = 1;
    cout << start << " ";

    for(int j = 1; j <= n; j++)
    {
        if(visit[j] == 0 && graph[start][j] != 0)
        {
            DFS_Rec (j);
        }
    }
}


 int main() {
    cin >> n >> e;
    int u, v;
    for(int i = 0; i < e; i ++)
    {
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    //DFS_Stk (1);      // When use Stack method.       
    DFS_Rec (1);        // When use Recursion method.

    
  return 0;
 }
*/




/*
// DFS with adjuncy list:
#include<bits/stdc++.h>
using namespace std;
int graph[1001][1001];
int visit[1001];
int n, e;

// For DFS with Stack meethod.
void DFS_Stk(int start)
{
    //Initial Step
    visit[start] = 1;
    cout << start << " ";
    stack <int> S;
    S.push (start);

    //Repeating Step
    while(!S.empty())
    {
        for(int j = 1; j <= n; j++)
        {
            int x = S.top();
            if(visit[j] == 0 && graph[x][j] != 0)
            {
                visit[j] = 1;
                cout << j << " ";
                S.push(j);
                j = 1;
            }
        }
    S.pop();
    }
}


// For DFS with Recursion meethod.
void DFS_Rec(int start)
{
    visit[start] = 1;
    cout << start << " ";

    for(int j = 1; j <= n; j++)
    {
        if(visit[j] == 0 && graph[start][j] != 0)
        {
            DFS_Rec(j);
            visit[j] = 1;
        }
    }
}




int main()
{
    cin >> n >> e;
    int u, v;
    for(int i = 1; i <= e; i++)
    {
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    //DFS_Stk(1);       // When use DFS stack then using.
    DFS_Rec(1);         // When use DFS Recursion then using.
}
*/




/*

//BFS with AM:

#include <bits/stdc++.h>
using namespace std;
int graph[1001][1001];
int visit[1001];
int node, edge;

void BFS(int start)
{
    //Initial Step:
    visit[start] = 1;
    cout << start << " ";
    queue <int> Q;
    Q.push(start);

    //Repeating Step:
    while(!Q.empty())
    {
        int x = Q.front();
        Q.pop();
        for(int j = 1; j <= node; j++)
        {
            if(visit[j] == 0 && graph[x][j] != 0)
            {
                visit[j] = 1;
                cout << j << " ";
                Q.push(j);
            }
        }
    }
}

int main() {
    cin >> node >> edge;
    int u, v;
    for(int i = 1; i <= edge; i++)
    {
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    BFS(1);

  return 0;
}
*/



/*
// BFS with AL:

#include <bits/stdc++.h>
using namespace std;
vector<int> graph[1001];
int visit[1001];
int node, edge;

void BFS(int start)
{
    // Initial step:
    visit[start] = 1;
    cout << start << " ";
    queue<int> Q;
    Q.push(start);

    // Repeating Step;
    while (!Q.empty())
    {
        int x = Q.front();
        Q.pop();

        for (int j = 0; j < graph[x].size(); j++)
        {
            int nd = graph[x][j];
            if (visit[nd] == 0)
            {
                visit[nd] = 1;
                cout << nd << " ";
                Q.push(nd);
            }
        }
    }
}

int main()
{
    cin >> node >> edge;
    int u, v;
    for (int i = 1; i <= edge; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    BFS(1);

    return 0;
}
*/





/*
//Topological sort using DFS adjancy metrix:

#include <bits/stdc++.h>
using namespace std;
int graph[1001][1001];
int visit[1001];
int n, e;
vector <int> ans;


void DFS (int start)
{
    visit[start] = 1;

    for(int j = 1; j <= n; j++)
    {
        if(visit[j] == 0 && graph[start][j] != 0)
        {
            visit[j] = 1;
            DFS (j);

        }
    }
    ans.push_back (start);
}


 int main() {
    cin >> n >> e;
    int u, v;
    for(int i = 1; i <= e; i++)
    {
        cin >> u >> v;
        graph[u][v] = 1;
    }

    for(int i = 1; i <= n; i++)
    {
        if(visit[i] == 0)
        {
            DFS (i);
        }
    }

    for(int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }

  return 0;
 }
*/




/*
// Topological sort using DFS adjancy list:

#include <bits/stdc++.h>
using namespace std;
vector<int> graph[1001];
int visit[1001];
int n, e;
vector<int> ans;

// Void type function calling:
void DFS(int start)
{
    visit[start] = 1;
    for (int j = 0; j < graph[start].size(); j++)
    {
        int node = graph[start][j];
        if (visit[node] == 0)
        {
            visit[node] = 1;
            DFS(node);
        }
    }
    ans.push_back(start);
}

int main()
{
    cin >> n >> e;
    int u, v;

    for (int i = 1; i <= e; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
    }

    for (int i = 1; i <= n; i++)
    {
        if (visit[i] == 0)
        {
            DFS(i);
        }
    }

    // For print:
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
*/





