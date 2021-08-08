#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
using Graph = vector<vector<int>>;
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
int N;
vector<bool> seen;

void dfs(Graph &G, int v, int prev) {
    seen[v] = true;
    cout << v << ' ';
    sort(G[v].begin(), G[v].end());
    for (auto next: G[v]) {
        if (seen[next]) continue;
        dfs(G, next, v);
    }
    if (prev != -1) cout << prev << ' ';
}

int main() {
    // input
    cin >> N;
    Graph G(N + 1);
    for (int i = 0; i < N - 1; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // solve
    seen.assign(N + 1, false);
    dfs(G, 1, -1);
}

