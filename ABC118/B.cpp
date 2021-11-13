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
int N, M, food[35];

int main() {
    // input
    cin >> N >> M;
    // solve
    rep0(i, N) {
        int K; cin >> K;
        rep0(i, K) {
            int A; cin >> A;
            food[A]++;
        }
    }
    int cnt = 0;
    rep1(i, M) {
        if (food[i] == N) cnt++;
    }
    cout << cnt << endl;
}