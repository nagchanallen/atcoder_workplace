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

int main() {
    cin >> N;
    ll temp = 1;
    for (int i = 1; i <= 31; ++i) temp *= 2;
    if (N >= temp * (-1) && N <= temp - 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}