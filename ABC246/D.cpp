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
ll N;

ll f(ll a, ll b) {
    return a * a * a + a * a * b + a * b * b + b * b * b;
}

int main() {
    cin >> N;
    ll a = 0, b = 2e6, X = 5e18;
    while (a <= b) {
        if (f(a, b) >= N) {
            X = min(f(a, b), X);
            b--;
        } else {
            a++;
        }
    }
    cout << X << endl;
}