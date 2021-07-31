#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
long long N, A[100005], B[100005], b[100005], C[100005];
long long ans = 0;

int main() {
    cin >> N;
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];
    rep(i, N) cin >> C[i];
    sort(A, A + N); sort(B, B + N); sort(C, C + N);

    for (int i = N - 1; i >= 0; i--) {
        b[i] = N - (upper_bound(C, C + N, B[i]) - C) + b[i + 1];
    }

    rep(i, N) {
        ans += b[upper_bound(B, B + N, A[i]) - B];
    }

    cout << ans << endl;
}