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
int H, W, dist[200][200];
char C[200][200];

int main() {
    cin >> H >> W;
    for (int i = 1; i <= H; ++i) {
        for (int j = 1; j <= W; ++j) {
            cin >> C[i][j];
            dist[i][j] = -1;
        }
    }
    queue<pair<int, int>> q;
    dist[1][1] = 0;
    q.push({1, 1});
    while (!q.empty()) {
        auto [i, j] = q.front(); q.pop();
        if (C[i][j + 1] == '.' && dist[i][j + 1] == -1) {
            dist[i][j + 1] = dist[i][j] + 1;
            q.push({i, j + 1});
        }
        if (C[i + 1][j] == '.' && dist[i + 1][j] == -1) {
            dist[i + 1][j] = dist[i][j] + 1;
            q.push({i + 1, j});
        }
    }
    int maxi = 0;
    for (int i = 1; i <= H; ++i) {
        for (int j = 1; j <= W; ++j) {
            maxi = max(maxi, dist[i][j]);
        }
    }
    cout << maxi + 1 << endl;
}