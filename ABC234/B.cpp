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
int N, x[300], y[300];

double leng(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)); 
}

int main() {
    cin >> N;
    double ans = 0;
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            ans = max(ans, leng(x[i], y[i], x[j], y[j]));
        }
    }
    cout << setprecision(12) << fixed << ans << endl;
}