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
int N, H[100005];

int main() {
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cin >> H[i];
    }
    int height = H[1];
    for (int i = 2; i <= N; ++i) {
        if (H[i] <= height) break;
        height = H[i];
    }
    cout << height << endl;
}