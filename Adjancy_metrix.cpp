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
