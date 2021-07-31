#include <bits/stdc++.h>
using namespace std;
int N, Q, p, x;
using Graph = vector<vector<int>>;
vector<long long> cnt, val;

void dfs(const Graph &G, int v, int pre = -1) {
    cnt[v] += val[v];
    for (int next: G[v]) {
        if (next == pre) continue;
        val[next] += val[v];
        dfs(G, next, v);
    }
}

int main() {
    cin >> N >> Q;
    Graph G(N);
    cnt.assign(N, 0);
    val.assign(N, 0);
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for (int i = 0; i < Q; i++) {
        cin >> p >> x;
        p--;
        val[p] += x;
    }
    dfs(G, 0);
    for (int i = 0; i < N; i++) {
        cout << cnt[i] << endl;
    }
}