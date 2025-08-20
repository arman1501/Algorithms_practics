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
