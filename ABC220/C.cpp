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
ll N, A[100005], X, Asum = 0, sum = 0;

int main() {
    // input
    cin >> N;
    rep1(i, N) {
        cin >> A[i];
        Asum += A[i];
    }
    cin >> X;
    // solve
    ll M = X / Asum * N;
    ll temp = 0;
    rep1(i, N) {
        if (temp + A[i] > X % Asum) {
            cout << M + i << endl;
            return 0;
        } else {
            temp += A[i];
        }
    }
}