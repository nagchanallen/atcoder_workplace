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
int V, A, B, C;

int main() {
    cin >> V >> A >> B >> C;
    int remain = V;
    while (true) {
        if (remain < A) {
            cout << "F" << endl;
            return 0;
        }
        remain -= A;
        if (remain < B) {
            cout << "M" << endl;
            return 0;
        }
        remain -= B;
        if (remain < C) {
            cout << "T" << endl;
            return 0;
        }
        remain -= C;
    }
}