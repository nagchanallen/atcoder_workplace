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
ll n;

int main() {
    cin >> n;
    ll temp1 = 1;
    ll temp2 = n * n;
    for (int i = 0; i < n; ++i) {
        temp1 *= 2;
        if (temp1 > temp2) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}