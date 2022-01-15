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
vector<int> dist;
int a, N;

void dfs(int x) {
    if (x >= 1000000 || G[x].size() > 0) return;
    if ((ll) x * a < 1000000) {
        G[x].push_back(x * a);
        dfs(x * a);
    }
    if (x >= 10 && x % 10 != 0) {
        string x_str = to_string(x);
        string temp = x_str[x_str.size() - 1] + to_string(x / 10);
        G[x].push_back(stoi(temp));
        dfs(stoi(temp));
    }
}

int main() {
    cin >> a >> N;
    G.resize(1000005);
    dfs(1);
    queue<int> q;
    dist.resize(1000005, -1);
    q.push(1);
    dist[1] = 0;
    while (!q.empty()) {
        int v = q.front(); q.pop();
        for (int next: G[v]) {
            if (dist[next] != -1) continue;
            dist[next] = dist[v] + 1;
            q.push(next);
        }
    }
    cout << dist[N] << endl;
}