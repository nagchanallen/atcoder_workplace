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
int N;
char G[1005][1005];

bool check(int x1, int y1) {
    // row
    rep0(i, 6) {
        int cnt = 0;
        rep0(j, 6) {
            if (G[x1 + i][y1 + j] == '#') {
                cnt++;
            }
        }
        if (cnt >= 4) return true;
    }
    // column
    rep0(i, 6) {
        int cnt = 0;
        rep0(j, 6) {
            if (G[x1 + j][y1 + i] == '#') {
                cnt++;
            }
        }
        if (cnt >= 4) return true;
    }
    // diagonal (left to right)
    int cnt = 0;
    rep0(i, 6) {
        if (G[x1 + i][y1 + i] == '#') {
            cnt++;
        }
    }
    if (cnt >= 4) return true;
    // diagonal (right to left)
    cnt = 0;
    rep0(i, 6) {
        if (G[x1 + 5 - i][y1 + i] == '#') {
            cnt++;
        }
    }
    if (cnt >= 4) return true;

    return false;
}

int main() {
    cin >> N;
    rep1(i, N) {
        rep1(j, N) {
            cin >> G[i][j];
        }
    }
    string ans = "No";
    rep1(i, N) rep1(j, N) {
        if (i + 5 <= N && j + 5 <= N) {
            if (check(i, j)) {
                ans = "Yes";
                break;
            } 
        }
    }
    cout << ans << endl;
}