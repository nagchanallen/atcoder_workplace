#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
long double P;
int cnt = 0;

long double df(long double x) {
    long double output = 1 - P * pow(2, (-1) * x / 1.5) * log(2) / 1.5;
    return output;
}

long double f(long double x) {
    return x + P * pow(2, (-1) * x / 1.5);
}

int main() {
    // input
    cin >> P;
    // solve
    long double lo = 0;
    long double hi = 1e20;
    while (true) {
        long double mid = (lo + hi) / 2;
        if ((df(mid) <= pow(10, -9) && df(mid) >= pow(10, -9) * (-1)) || 
        (mid - lo <= pow(10, -45))) {
            // output
            cout << setprecision(20) << fixed << f(mid) << endl;
            return 0;
        }
        if (df(mid) > 0) {
            hi = mid;
        } else {
            lo = mid;
        }
    }
}