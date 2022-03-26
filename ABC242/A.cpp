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
long double A, B, C, X;

int main() {
    cin >> A >> B >> C >> X;
    long double p;
    if (X <= A) {
        p = 1;
    } else if (X >= A + 1 && X <= B) {
        p = C / (B - A);
    } else {
        p = 0;
    }
    cout << setprecision(12) << p << endl;
}