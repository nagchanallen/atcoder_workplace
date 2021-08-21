#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
int R, C, sy, sx, gy, gx;
char c[60][60];
int dist[60][60];
queue<pair<int, int>> q;

int main() {
    // input
    cin >> R >> C;
    cin >> sy >> sx;
    cin >> gy >> gx;
    rep1(i, R) rep1(j, C) cin >> c[i][j];
    // solve
    rep1(i, R) rep1(j, C) dist[i][j] = -1;
    dist[sy][sx] = 0;
    q.push({sy, sx});
    while (!q.empty()) {
        auto P = q.front();
        int y = P.first;
        int x = P.second;
        q.pop();
        if (y - 1 >= 1 && c[y - 1][x] == '.' && dist[y - 1][x] == -1) {
            dist[y - 1][x] = dist[y][x] + 1;
            q.push({y - 1, x});
        }
        if (y + 1 <= R && c[y + 1][x] == '.' && dist[y + 1][x] == -1) {
            dist[y + 1][x] = dist[y][x] + 1;
            q.push({y + 1, x});
        }
        if (x - 1 >= 1 && c[y][x - 1] == '.' && dist[y][x - 1] == -1) {
            dist[y][x - 1] = dist[y][x] + 1;
            q.push({y, x - 1});
        }
        if (x + 1 <= C && c[y][x + 1] == '.' && dist[y][x + 1] == -1) {
            dist[y][x + 1] = dist[y][x] + 1;
            q.push({y, x + 1});
        }
    }
    // output
    cout << dist[gy][gx] << endl;
}