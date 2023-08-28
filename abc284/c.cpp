#include <bits/stdc++.h>
using namespace std;

int numberOfVertices, numberOfEdges;
vector<vector<int>> graph;
vector<bool> visited;

// dfs
void dfs(int c) {
    visited[c] = true;
    for (auto& h : graph[c]) {
        if (visited[h]) continue;
        dfs(h);
    }
}

int main() {
    cin >> numberOfVertices >> numberOfEdges;
    graph.resize(numberOfVertices);
    visited.resize(numberOfVertices);

    for (int i=0;i<numberOfEdges;i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int ans = 0;
    for (int i=0;i<numberOfVertices;i++) {
        if (!visited[i]) ans++, dfs(i);
    }
    
    cout << ans << endl;
    return 0;
}
