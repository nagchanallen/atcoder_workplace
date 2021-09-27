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
int N, M, T, A[1005], B[1005];

int main() {
    // input
    cin >> N >> M >> T;
    int maxi = N;
    rep1(i, M) cin >> A[i] >> B[i];
    A[0] = 0; B[0] = 0; A[M + 1] = T; B[M + 1] = T;
    // solve
    int power = N;
    rep1(i, M + 1) {
        N -= (A[i] - B[i - 1]);
        if (N <= 0) {
            cout << "No" << endl; return 0;
        }
        N = min(maxi, N + (B[i] - A[i]));
    }
    cout << "Yes" << endl;
}