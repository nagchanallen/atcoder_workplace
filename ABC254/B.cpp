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
int N, a[500][500];

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j == 0 || j == i) {
                a[i][j] = 1;
            } else {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << a[i][j] << " ";        
        }
        cout << endl;
    }    
}