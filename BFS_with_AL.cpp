
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
