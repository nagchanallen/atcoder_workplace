#include <iostream>
#include <vector>
#include <utility>
#include <queue>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
int N, M;
ll MOD = 1000000007;

int main() {
    cin >> N >> M;
    Graph G(N);
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        A--; B--;
        G[A].push_back(B);
        G[B].push_back(A);
    }
    queue<int> q;
    vector<ll> dist(N, -1), cnt(N, 0);
    q.push(0);
    dist[0] = 0;
    cnt[0] = 1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (auto next: G[v]) {
            if (dist[next] != -1) {
                if (dist[v] + 1 == dist[next]) cnt[next] += cnt[v];
                continue;
            }
            dist[next] = dist[v] + 1;
            cnt[next] = (cnt[next] + cnt[v]) % MOD;
            q.push(next);
        }
    }
    cout << cnt[N - 1] % MOD << endl;
}