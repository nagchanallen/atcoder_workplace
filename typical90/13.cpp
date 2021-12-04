#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M;

struct Edge {
    int to;
    int weight;
    Edge(int _to, int _weight) {
        to = _to;
        weight = _weight;
    }
};

vector<vector<Edge>> G;

int main() {
    cin >> N >> M;
    G.resize(N);
    for (int i = 0; i < M; ++i) {
        int A, B, C; cin >> A >> B >> C;
        --A; --B;
        G[A].push_back(Edge(B, C));
        G[B].push_back(Edge(A, C));
    }

    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int, int>>> pq1, pq2;
    vector<int> dist1(N, 2e9), dist2(N, 2e9);
    pq1.push({0, 0});
    dist1[0] = 0;
    while (!pq1.empty()) {
        pair<int,int> v = pq1.top(); pq1.pop();
        int node = v.second;
        for (Edge next: G[node]) {
            if (dist1[node] + next.weight < dist1[next.to]) {
                dist1[next.to] = dist1[node] + next.weight;
                pq1.push({dist1[next.to], next.to});
            }
        }
    }
    pq2.push({0, N - 1});
    dist2[N - 1] = 0;
    while (!pq2.empty()) {
        pair<int, int> v = pq2.top(); pq2.pop();
        int node = v.second;
        for (Edge next: G[node]) {
            if (dist2[node] + next.weight < dist2[next.to]) {
                dist2[next.to] = dist2[node] + next.weight;
                pq2.push({dist2[next.to], next.to});
            }
        }
    }
    for (int k = 0; k < N; ++k) {
        cout << dist1[k] + dist2[k] << endl;
    }
}