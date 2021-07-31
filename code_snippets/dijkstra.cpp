#include <iostream>
#include <queue>
using ll = long long;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
int N, M, S;

struct Edge {
    int to;
    int weight;
    Edge(int t, int w): to(t), weight(w) {};
};
using Graph = vector<vector<Edge>>;

void dijkstra(const Graph &G, int s) {
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    vector<bool> visited(N, false);
    vector<ll> dis(N, 4e18);
    rep(i, N) dis[i] = 4e18;
    dis[s] = 0;
    pq.push(make_pair(dis[s], s));
    while (!pq.empty()) {
        int v = pq.top().second;
        pq.pop();
        if (visited[v]) continue;
        visited[v] = true;
        for (Edge next: G[v]) {
            if (dis[next.to] > dis[v] + next.weight) {
                dis[next.to] = dis[v] + next.weight;
                pq.push(make_pair(dis[next.to], next.to));
            }
        }
    }
    rep(i, N) cout << dis[i] << endl;
}

int main() {
    cin >> N >> M >> S;
    Graph G(N);
    rep(i, M) {
        int from, to, weight;
        cin >> from >> to >> weight;
        G[from].push_back(Edge(to, weight));
    }
    dijkstra(G, 0);
    return 0;
}