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
int H, N, A[100005];

int main() {
    // input
    cin >> H >> N;
    rep0(i, N) cin >> A[i];
    // solve
    int sum = 0;
    rep0(i, N) sum += A[i];
    // output
    if (sum >= H) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}