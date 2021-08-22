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
int W, H;
int G[105][105], dist[105][105], ans = 0, cnt = 0;

int main() {
    // input
    cin >> W >> H;
    rep1(i, H) rep1(j, W) cin >> G[j][i];
    // solve
    queue<pair<int, int>> q;
    rep0(i, H + 2) rep0(j, W + 2) dist[j][i] = -1;
    q.push(make_pair(0, 0));
    dist[0][0] = 0;
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (x - 1 >= 0) {
            if (y - 1 >= 0 && y % 2 == 0) {
                if (G[x - 1][y - 1] == 1) {
                    ans++;
                } else {
                    if (dist[x - 1][y - 1] == -1) {
                        q.push(make_pair(x - 1, y - 1));
                        dist[x - 1][y - 1] = dist[x][y] + 1;
                    }
                }
            }
            if (G[x - 1][y] == 1) {
                ans++;
            } else {
                if (dist[x - 1][y] == -1) {
                    q.push(make_pair(x - 1, y));
                    dist[x - 1][y] = dist[x][y] + 1;
                }
            }
            if (y + 1 <= H + 1 && y % 2 == 0) {
                if (G[x - 1][y + 1] == 1) {
                    ans++;
                } else {
                    if (dist[x - 1][y + 1] == -1) {
                        q.push(make_pair(x - 1, y + 1));
                        dist[x - 1][y + 1] = dist[x][y] + 1;
                    }
                }
            }
        }
        if (y - 1 >= 0) {
            if (G[x][y - 1] == 1) {
                ans++;
            } else {
                if (dist[x][y - 1] == -1) {    
                    q.push(make_pair(x, y - 1));
                    dist[x][y - 1] = dist[x][y] + 1;
                }
            }
        }
        if (y + 1 <= H + 1) {
            if (G[x][y + 1] == 1) {
                ans++;
            } else {
                if (dist[x][y + 1] == -1) {
                    q.push(make_pair(x, y + 1));
                    dist[x][y + 1] = dist[x][y] + 1;
                }
            }
        }
        if (x + 1 <= W + 1) {
            if (y - 1 >= 0 && y % 2 == 1) {
                if (G[x + 1][y - 1] == 1) {
                    ans++;
                } else {
                    if (dist[x + 1][y - 1] == -1) {
                        q.push(make_pair(x + 1, y - 1));
                        dist[x + 1][y - 1] = dist[x][y] + 1;
                    }
                }
            }
            if (G[x + 1][y] == 1) {
                ans++;
            } else {
                if (dist[x + 1][y] == -1) {
                    q.push(make_pair(x + 1, y));
                    dist[x + 1][y] = dist[x][y] + 1;
                }
            }
            if (y + 1 <= H + 1 && y % 2 == 1) {
                if (G[x + 1][y + 1] == 1) {
                    ans++;
                } else {
                    if (dist[x + 1][y + 1] == -1) {
                        q.push(make_pair(x + 1, y + 1));
                        dist[x + 1][y + 1] = dist[x][y] + 1;
                    }
                }
            }
        }
    }
    // output 
    cout << ans << endl;
}