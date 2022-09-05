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
ll N, A, B;

int main() {
    cin >> N >> A >> B;
    if (A <= B) {
        cout << max(N - A + 1, (ll)0) << endl;
        return 0;
    }

    if (N < A) {
        cout << 0 << endl;
        return 0;
    }


    cout << (N - (A - 1)) / A * B + min(N - N / A * A + 1, B) << endl;
}