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
int N, K, A[200005], B[200005];
bool can[200005][3];

int main() {
    cin >> N >> K;
    rep1(i, N) cin >> A[i];
    rep1(i, N) cin >> B[i];
    can[0][0] = true;
    can[0][1] = true;
    A[0] = A[1];
    B[0] = B[1];

    rep1(i, N) {
        if (abs(A[i] - A[i - 1]) <= K && can[i - 1][0]) {
            can[i][0] = true;
        }
        if (abs(A[i] - B[i - 1]) <= K && can[i - 1][1]) {
            can[i][0] = true;
        }
        if (abs(B[i] - A[i - 1]) <= K && can[i - 1][0]) {
            can[i][1] = true;
        }
        if (abs(B[i] - B[i - 1]) <= K && can[i - 1][1]) {
            can[i][1] = true;
        }
    }

    if (can[N][0] || can[N][1]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}