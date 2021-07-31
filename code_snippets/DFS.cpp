#include <bits/stdc++.h>
using namespace std;

// adjacency-list
using Graph = vector<vector<int>>;
Graph G;
vector<bool> seen;

void dfs(const Graph &G, int v) {
    seen[v] = true;
    for (auto next_v: G[v]) {
        if (seen[next_v]) continue;
        dfs(G, next_v);
    }
    cout << v << ' ';
}

int main() {
    int N, M, S; cin >> N >> M >> S;

    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    seen.assign(N, false);
    dfs(G, S);
}