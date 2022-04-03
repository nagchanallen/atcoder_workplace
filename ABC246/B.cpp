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
long double A, B;

int main() {
    cin >> A >> B;
    long double angle = atan(B / A);
    cout << setprecision(15) << fixed << cos(angle) << " " << sin(angle) << endl;
}