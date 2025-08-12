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
