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
int N;

int main() {
    cin >> N;
    vector<int> v(N, 0);
    rep0(i, 4 * N - 1) {
        int A; cin >> A;
        v[A - 1]++;
    }
    rep0(i, N) {
        if (v[i] == 3) {
            cout << i + 1 << endl;
            break;
        }
    }
}