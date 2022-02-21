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
vector<vector<int>> G;
vector<pair<int, int>> range;
vector<int> leaf;
int N;

int dfs(int prev, int x) {
    if (prev != -1 && G[x].size() == 1) {
        leaf[x] = 1;
        return 1;
    } 
    int temp = 0;
    for (int next: G[x]) {
        if (next == prev) continue;
        temp += dfs(x, next);
    }
    leaf[x] = temp;
    return temp;
}

void dfs2(int prev, int x, int left, int right) {
    range[x] = {left, right};
    int temp = left;
    for (int next: G[x]) {
        if (next == prev) continue;
        dfs2(x, next, temp, temp + leaf[next] - 1);
        temp = temp + leaf[next];
    }
}

int main() {
    cin >> N;
    G.resize(N);
    range.resize(N);
    leaf.resize(N);
    for (int i = 0; i < N - 1; ++i) {
        int u, v; cin >> u >> v; u--; v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    dfs2(-1, 0, 1, dfs(-1, 0));
    for (int i = 0; i < N; ++i) {
        cout << range[i].first << ' ' << range[i].second << endl;
    }
}