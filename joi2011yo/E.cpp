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
int H, W, N, si, sj;
ll ans = 0;
char C[1005][1005];
int dist[1005][1005];

int main() {
    // input
    cin >> H >> W >> N;
    rep0(i, H) rep0(j, W) {
        cin >> C[i][j];
        if (C[i][j] == 'S') {
            si = i; sj = j;
        }
    }
    // solve
    int D = 1;
    while (D <= N) {
        queue<pair<int, int>> q;
        q.push(make_pair(si, sj));
        rep0(i, H) rep0(j, W) dist[i][j] = -1;
        dist[si][sj] = 0;
        while (!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            if (C[i][j] == '0' + D) {
                ans += dist[i][j];
                si = i; sj = j; D++;
                break;
            }
            if (i - 1 >= 0 && C[i - 1][j] != 'X' && dist[i - 1][j] == -1) {
                q.push(make_pair(i - 1, j));
                dist[i - 1][j] = dist[i][j] + 1;
            }
            if (i + 1 < H && C[i + 1][j] != 'X' && dist[i + 1][j] == -1) {
                q.push(make_pair(i + 1, j));
                dist[i + 1][j] = dist[i][j] + 1;
            }
            if (j - 1 >= 0 && C[i][j - 1] != 'X' && dist[i][j - 1] == -1) {
                q.push(make_pair(i, j - 1));
                dist[i][j - 1] = dist[i][j] + 1;
            }
            if (j + 1 < W && C[i][j + 1] != 'X' && dist[i][j + 1] == -1) {
                q.push(make_pair(i, j + 1));
                dist[i][j + 1] = dist[i][j] + 1;
            }
        }
    }
    // output
    cout << ans << endl;
}