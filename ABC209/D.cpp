#include <bits/stdc++.h>
using namespace std;
int N, Q;
using Graph = vector<vector<int>>;
vector<int> height;
vector<bool> seen;

void dfs(const Graph &G, int v, int h) {
    seen[v] = true;
    height[v] = h;
    for (int next: G[v]) {
        if (seen[next]) continue;
        dfs(G, next, h + 1);
    }
}

int main() {
    cin >> N >> Q;
    Graph G(N);
    height.assign(N, 0);
    seen.assign(N, false);
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    dfs(G, 0, 0);
    for (int i = 0; i < Q; i++) {
        int c, d;
        cin >> c >> d;
        c--; d--;
        if (((height[d] - height[c]) % 2) == 0) {
            cout << "Town" << endl;
        } else {
            cout << "Road" << endl;
        }
    }
}