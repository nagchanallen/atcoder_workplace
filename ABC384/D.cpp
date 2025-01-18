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
ll N, S, A[500000], sum;
vector<ll> s;

int main() {
    sum = 0;
    cin >> N >> S;
    for (ll i = 1; i <= N; ++i) {
        cin >> A[i];
        A[i + N] = A[i];
        sum += A[i];
    }

    S = S % sum;

    s.assign(N * 3, 0);
    s[0] = 0;
    for (ll i = 1; i <= N * 2; ++i) {
        s[i] = s[i - 1] + A[i];
    }

    for (ll i = 1; i <= N * 2; ++i) {
        if (binary_search(s.begin(), s.end(), s[i] - S)) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}