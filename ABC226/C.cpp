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
int N, T[200005], K[200005];
vector<vector<int>> G;

int main() {
    // input
    cin >> N;
    G.resize(N + 1);
    rep1(i, N) {
        cin >> T[i] >> K[i];
        rep0(j, K[i]) {
            int A; cin >> A;
            G[i].push_back(A);
        }
    }
    // solve
    vector<bool> visited(N + 1, false);
    stack<int> st;
    st.push(N);
    visited[N] = true;
    ll ans = T[N];
    while (!st.empty()) {
        int v = st.top(); st.pop();
        for (auto next: G[v]) {
            if (visited[next]) continue;
            ans += T[next];
            visited[next] = true;
            st.push(next);
        }
    }
    cout << ans << endl;
}