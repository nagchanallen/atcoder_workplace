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

// global variablesa
int R, C, ans = 0;

int main() {
    // input
    cin >> R >> C;
    bitset<10300> cake[15];
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            int a; cin >> a;
            cake[i].set(j, a);
        }
    }
    // solve
    bitset<10300> temp[15];
    for (int i = 0; i < (1 << R); ++i) {
        int cnt = 0;
        for (int j = 0; j < R; ++j) temp[j] = cake[j];
        for (int j = 0; j < R; ++j) {
            if (i & (1 << j)) {
                temp[j].flip();
            }
        }
        for (int j = 0; j < C; ++j) {
            int one = 0;
            for (int k = 0; k < R; ++k) {
                if (temp[k][j] == 1) one++;
            }
            cnt += max(one, R - one);
        }
        ans = max(cnt, ans);
    }
    // output
    cout << ans << endl;
}