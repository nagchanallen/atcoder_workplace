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

void dfs(const Graph &G, int v, int prev) {
    seen[v] = true;
    cout << v << ' ';
    int temp[G[v].size()];
    for (int i = 0; i < G[v].size(); ++i) {
        temp[i] = G[v][i];
    }
    sort(temp, temp + G[v].size());
    for (int i = 0; i < G[v].size(); ++i) {
        if (seen[temp[i]]) continue;
        dfs(G, temp[i], v);
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

