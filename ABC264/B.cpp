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
int R, C, G[20][20];

int main() {
    cin >> R >> C;
    for (int i = 0; i < 8; ++i) {
        for (int j = 1 + i; j <= 15 - i; ++j) {
            for (int k = 1 + i; k <= 15 - i; ++k) {
                if (i % 2 == 0) {
                    G[j][k] = 1; // black
                } else {
                    G[j][k] = 0; // white
                }
            }
        }
    }

    if (G[R][C] == 1) {
        cout << "black" << endl;
    } else {
        cout << "white" << endl;
    }
}