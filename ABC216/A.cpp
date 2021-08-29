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

int main() {
    // input
    double N;
    cin >> N;
    int n;
    n = N * 10;
    // solve
    if (n % 10 <= 2) {
        cout << n / 10 << '-' << endl;
    } else if (n % 10 <= 6) {
        cout << n / 10 << endl;
    } else {
        cout << n / 10 << '+' << endl;
    }
}