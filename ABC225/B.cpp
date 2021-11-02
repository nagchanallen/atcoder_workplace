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
int N; bool F[2];

int main() {
    // input
    cin >> N;
    int A, B;
    cin >> A >> B;
    F[0] = true; F[1] = true;
    rep0(i, N - 2) {
        int a, b;
        cin >> a >> b;
        if (a != A && b != A) F[0] = false;
        if (a != B && b != B) F[1] = false;
    }
    // solve
    if (F[0] || F[1]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}