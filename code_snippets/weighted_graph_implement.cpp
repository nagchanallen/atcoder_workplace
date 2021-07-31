#include <bits/stdc++.h>
using namespace std;
int N, M, A[20005], B[20005], C[20005], Q[20005], prev[20005], d[20005];

struct Edge {
    int to;
    int weight;
    Edge(int t, int w) : to(t), weight(w) {}
};
using Graph = vector<vector<Edge>>;

int main() {
    cin >> N >> M;

    Graph G(N);
    for (int i = 0; i < M; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        G[A].push_back(Edge(B, C));
    }
}