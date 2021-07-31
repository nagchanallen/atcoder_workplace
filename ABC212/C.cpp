#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
using Graph = vector<vector<int>>;
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

ll N, M, A[300005], B[300005], mini = LLINF;

int main() {
    cin >> N >> M;
    rep0(i, N) cin >> A[i];
    rep0(i, M) cin >> B[i];
    sort(A, A + N); sort(B, B + M);
    A[N] = LLINF;
    B[M] = LLINF;
    rep0(i, N) {
        ll lo = lower_bound(B, B + M, A[i]) - B;
        mini = min(abs(B[lo] - A[i]), mini);
    }
    rep0(i, M) {
        ll lo = lower_bound(A, A + N, B[i]) - A;
        mini = min(abs(A[lo] - B[i]), mini);
    }
    cout << mini << endl;
}