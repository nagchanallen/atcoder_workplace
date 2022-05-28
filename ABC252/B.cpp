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
int N, K, A[200], B[200];

int main() {
    cin >> N >> K;
    rep1(i, N) cin >> A[i];
    rep1(i, K) cin >> B[i];
    int greatest = 1;
    rep1(i, N) {
        greatest = max(greatest, A[i]);
    }

    rep1(i, K) {
        if (A[B[i]] == greatest) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}