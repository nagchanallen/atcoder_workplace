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
int N, A[200005];

int main() {
    cin >> N;
    rep0(i, N) cin >> A[i];
    int target = A[N - 1];
    for (int i = 0; i < N; ++i) {
        if (A[i] > A[i + 1]) {
            target = A[i];
            break;
        }
    }
    for (int i = 0; i < N; ++i) {
        if (A[i] != target) cout << A[i] << ' ';
    }
    cout << endl;
}