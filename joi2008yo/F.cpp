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
int n, k;

struct Edge {
    int to;
    int weight;
    Edge(int t, int w): to(t), weight(w) {};
};

int main() {
    cin >> n >> k;
    vector<vector<Edge>> G(n + 1);
    for (int Q = 0; Q < k; ++Q) {
        int q; cin >> q;
        if (q == 1) {
            int c, d, e; cin >> c >> d >> e;
            G[c].push_back(Edge(d, e));
            G[d].push_back(Edge(c, e));
        } else {
            int a, b; cin >> a >> b;
            ll dist[n + 1];
            for (int i = 1; i <= n; ++i) dist[i] = LLINF;
            dist[a] = 0;
            priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
            pq.push(make_pair(dist[a], a));
            while (!pq.empty()) {
                pair<ll, int> v = pq.top(); pq.pop();
                if (v.first > dist[v.second]) continue;
                for (auto next: G[v.second]) {
                    if (v.first + next.weight < dist[next.to]) {
                        dist[next.to] = v.first + next.weight;
                        pq.push(make_pair(dist[next.to], next.to));
                    }
                }
            }
            if (dist[b] == LLINF) {
                cout << -1 << endl;
            } else {
                cout << dist[b] << endl;
            }
        }
    }
}