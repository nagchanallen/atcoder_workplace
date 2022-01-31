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
int H, W;

int main() {
    cin >> H >> W;
    int A[H + 5][W + 5];
    for (int i = 1; i <= H; ++i) {
        for (int j = 1; j <= W; ++j) {
            cin >> A[i][j];
        }
    }
    for (int i = 1; i <= W; ++i) {
        for (int j = 1; j <= H; ++j) {
            cout << A[j][i] << ' ';
        }
        cout << endl;
    }
}