#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
vector<ll> dist;
queue<int> q;
int N, M;

void BFS(const Graph &G) {
    while (!q.empty()) { // O(|V|) / O(N)
        int v = q.front();
        q.pop();
        for (auto next: G[v]) { // O(|E|) / O(M)
            if (dist[next] != -1) continue;
            dist[next] = dist[v] + 1;
            q.push(next);
        }
    }
}

int main() {
    cin >> N >> M;
    Graph G(N);
    dist.assign(N, -1);
    for (int i = 0; i < M; ++i) {
        int A, B;
        cin >> A >> B;
        G[A].push_back(B);
        G[B].push_back(A);
    }
    q.push(0);
    dist[0] = 0;
    BFS(G);
    for (int i = 0; i < N; ++i) cout << dist[i] << endl;
}