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
ll N, M, A[200005], U[200005], V[200005], cost[200005];
vector<vector<ll>> G;
priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
bool done[200005];

ll ans = 0;

int main() {
    cin >> N >> M;
    G.resize(N);
    rep0(i, N) cin >> A[i];
    rep0(i, M) {
        cin >> U[i] >> V[i];
        U[i]--; V[i]--;
        G[U[i]].push_back(V[i]);
        G[V[i]].push_back(U[i]);
        cost[U[i]] += A[V[i]];
        cost[V[i]] += A[U[i]];
    }

    rep0(i, N) {
        pq.push({cost[i], i});
    }

    ll cnt = N;
    while (cnt > 0) {
        auto [c,node] = pq.top(); pq.pop();
        if (done[node]) continue;
        done[node] = true;
        cnt--;
        ans = max(ans, c);
        for (ll next: G[node]) {
            cost[next] -= A[node];
            pq.push({cost[next], next});
        }
    }

    cout << ans << endl;
}