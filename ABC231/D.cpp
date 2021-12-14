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
int N, M, A[100005], B[100005];
vector<bool> visited;
vector<vector<int>> G;

bool DFS(int prev, int cur) {
    visited[cur] = true;
    for (int next: G[cur]) {
        if (next == prev) continue;
        if (visited[next]) return false;
        if (!DFS(cur, next)) return false;
    }
    return true;
}

int main() {
    cin >> N >> M;
    G.resize(N);
    visited.resize(N, false);
    rep0(i, M) {
        cin >> A[i] >> B[i];
        --A[i]; --B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }
    for (vector<int> node: G) {
        if (node.size() > 2) {
            cout << "No" << endl;
            return 0;
        }
    }
    for (int i = 0; i < N; ++i) {
        if (visited[i]) continue;
        bool ok = DFS(-1, i);
        if (!ok) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}