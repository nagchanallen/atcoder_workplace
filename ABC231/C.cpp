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
int N, Q, A[200005], x[200005];

int main() {
    cin >> N >> Q;
    rep0(i, N) cin >> A[i];
    sort(A, A + N);
    rep0(i, Q) {
        cin >> x[i];
        cout << N - (lower_bound(A, A + N, x[i]) - A) << endl;
    }
}