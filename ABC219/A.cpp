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
int X;

int main() {
    // input
    cin >> X;
    // solve
    if (X >= 90) {
        cout << "expert" << endl;
    } else if (X >= 70) {
        cout << 90 - X << endl;
    } else if (X >= 40) {
        cout << 70 - X << endl;
    } else {
        cout << 40 - X << endl;
    }
}