#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
int N, M;
ll H[300005];
vector<vector<pair<ll, int>>> G; // {Weight, to}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        cin >> H[i];
    }
    G.resize(N);
    for (int i = 0; i < M; ++i) {
        int u, v; cin >> u >> v; u--; v--;
        if (H[u] > H[v]) {
            G[u].push_back({H[u] - H[v], v});
            G[v].push_back({(H[u] - H[v]) * -2, u});
        } else if (H[u] < H[v]) {
            G[u].push_back({(H[v] - H[u]) * -2, v});
            G[v].push_back({H[v] - H[u], u});
        } else {
            G[u].push_back({0, v});
            G[v].push_back({0, u});            
        }
    }
    ll maxi = 0;
    vector<ll> dist(N + 5, -2e18);
    queue<int> q;
    dist[0] = 0;
    q.push(0);
    while (!q.empty()) {
        int v = q.front(); q.pop();
        for (auto next: G[v]) {
            if (dist[next.second] >= dist[v] + next.first) continue;
            dist[next.second] = dist[v] + next.first;
            maxi = max(maxi, dist[next.second]);
            q.push(next.second);
        }
    }
    cout << maxi << endl;
}