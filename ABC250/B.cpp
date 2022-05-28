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
int N, A, B;
char G[200][200];

int main() {
    cin >> N >> A >> B;
    for (int x = 0; x < N; ++x) {
        for (int y = 0; y < N; ++y) {
            for (int i = 0; i < A; ++i) {
                for (int j = 0; j < B; ++j) {
                    if ((x + y) % 2 == 0) {
                        G[x * A + i][y * B + j] = '.';
                    } else {
                        G[x * A + i][y * B + j] = '#';  
                    }
                }
            }
        }
    }
    for (int i = 0; i < A * N; ++i) {
        for (int j = 0; j < B * N; ++j) {
            cout << G[i][j];
        }
        cout << endl;
    }
}