#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INF = 2e9;
typedef pair<ll, pair<ll, ll>> iPair;

// global variables
int N, M, A[200005], B[200005], C[200005];
vector<vector<iPair>> G;
vector<int> ans;
vector<bool> used;

int main() {
    cin >> N >> M;
    G.resize(N);
    rep1(i, M) {
        cin >> A[i] >> B[i] >> C[i];
        A[i]--; B[i]--; C[i]--;
        G[A[i]].push_back({B[i], {C[i], i}});
        G[B[i]].push_back({A[i], {C[i], i}});
    }

    priority_queue<iPair, vector <iPair> , greater<iPair> > pq;
    // {1 to i's distance, {next_node, edge id}
    used.resize(N, false);
    pq.push({0, {0, 0}});

    while (!pq.empty()) {
        auto cur = pq.top(); pq.pop();
        if (used[cur.second.first]) continue;
        used[cur.second.first] = true;
        if (cur.second.second != 0) ans.push_back(cur.second.second);
        ll dis = cur.first;
        for (auto n: G[cur.second.first]) {
            pq.push({dis + n.second.first, {n.first, n.second.second}});
        }
    }

    for (auto b: ans) {
        cout << b << " ";
    }
    cout << endl;
}