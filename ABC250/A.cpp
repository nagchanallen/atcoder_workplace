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
int H, W, R, C;

int main() {
    cin >> H >> W;
    cin >> R >> C;
    int ans = 0;
    vector<int> x = {1, 0, -1, 0};
    vector<int> y = {0, 1, 0, -1};
    for (int i = 0; i < 4; ++i) {
        if (R + y[i] >= 1 && R + y[i] <= H && C + x[i] >= 1 && C + x[i] <= W) {
            ans++;
        }
    }
    cout << ans << endl;
}