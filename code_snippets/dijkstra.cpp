#include <iostream>
#include <queue>
using ll = long long;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
ll LLINF = 3e18;
int N, M, S;

struct Edge {
    int to;
    int weight;
    Edge(int t, int w) : to(t), weight(w) {};
};

// global variables
int V, E, r;

int main() {
    // input
    cin >> V >> E >> r;
    vector<vector<Edge>> G(V);
    for (int i = 0; i < E; ++i) {
        int s, t, d; cin >> s >> t >> d;
        G[s].push_back(Edge(t, d));
    }
    // solve
    ll dist[V];
    for (int i = 0; i < V; ++i) dist[i] = LLINF;
    dist[r] = 0;
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>> > pq;
    pq.push(make_pair(dist[r], r));
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
    // output
    for (int i = 0; i < V; ++i) {
        if (dist[i] == LLINF) {
            cout << "INF" << endl;
        } else {
            cout << dist[i] << endl;
        }
    }
}