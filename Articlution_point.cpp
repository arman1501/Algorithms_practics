#include <bits/stdc++.h>
using namespace std;
int graph[1001][1001];
int visit[1001];
int dis[1001], low[1001];
bool isAP[1001];
int timer = 0;
int n, e;

// Void type function calling.
void DFS (int u, int parent)
{
    visit[u] = 1;
    dis[u] = low[u] = ++timer;

    int child = 0;
    for(int v = 1; v <= n; v++)
    {
        if(visit[v] == 0 && graph[u][v] != 0)
        {
            child++;
            DFS (v, u);

            low[u] = min(low[u], low[v]);
            isAP[u] = true;
        }
        else if(v != parent && graph[u][v] != 0)
        {
            low[u] = min(low[u], dis[v]);
        }
    }

    if(parent == -1 && child > 1)
    {
        isAP[u] = true;
    }
}



 int main() {
    cin >> n >> e;
    int u, v;
    for(int i = 1; i <= e; i++)
    {
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    DFS(1, -1);     // Define void function called.


    for(int i = 1; i <= n; i++)
    {
        if(isAP[i] == true)
        {
            cout << i << " is an AP" << endl;
        }
    }
    

  return 0;
 }
