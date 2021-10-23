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
int H, W, Scnt = 0, dist[60][60];
string G[60];

int main() {
    // input
    cin >> H >> W;
    for (int i = 0; i < H; ++i) cin >> G[i];
    // solve
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (G[i][j] == '#') Scnt++;
            dist[i][j] = -1;
        }
    }
    dist[0][0] = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));
    while (!q.empty()) {
        pair<int, int> pt = q.front(); q.pop();
        if (pt.first - 1 >= 0 && dist[pt.first - 1][pt.second] == -1 && G[pt.first - 1][pt.second] == '.') {
            dist[pt.first - 1][pt.second] = dist[pt.first][pt.second] + 1;
            q.push(make_pair(pt.first - 1, pt.second));
        }
        if (pt.second - 1 >= 0 && dist[pt.first][pt.second - 1] == -1 && G[pt.first][pt.second - 1] == '.') {
            dist[pt.first][pt.second - 1] = dist[pt.first][pt.second] + 1;
            q.push(make_pair(pt.first, pt.second - 1));
        }
        if (pt.first + 1 <= H - 1 && dist[pt.first + 1][pt.second] == -1 && G[pt.first + 1][pt.second] == '.') {
            dist[pt.first + 1][pt.second] = dist[pt.first][pt.second] + 1;
            q.push(make_pair(pt.first + 1, pt.second));
        }
        if (pt.second + 1 <= W - 1 && dist[pt.first][pt.second + 1] == -1 && G[pt.first][pt.second + 1] == '.') {
            dist[pt.first][pt.second + 1] = dist[pt.first][pt.second] + 1;
            q.push(make_pair(pt.first, pt.second + 1));
        }
    }
    if (dist[H - 1][W - 1] == -1) {
        cout << dist[H - 1][W - 1] << endl;
    } else {
        cout << H * W - 1 - dist[H - 1][W - 1] - Scnt << endl;
    }
}