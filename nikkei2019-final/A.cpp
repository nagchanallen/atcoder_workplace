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
long long N, A[3005], S[3005];

int main() {
    cin >> N;
    S[0] = 0;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        S[i + 1] = S[i] + A[i];
    }
    for (int k = 1; k <= N; ++k) {
        long long maxi = 0;
        for (int j = 0; j + k <= N; ++j) {
            maxi = max(S[j + k] - S[j], maxi);
        }
        cout << maxi << endl;
    }
}