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
int N;
string A[1005]; 

int main() {
    cin >> N;
    rep0(i, N)  {
        cin >> A[i];
    }
    bool ok = true;
    rep0(i, N) rep0(j, N) {
        if (i == j) continue;
        if (A[i][j] == 'W' && A[j][i] != 'L') ok = false;
        if (A[i][j] == 'L' && A[j][i] != 'W') ok = false;
        if (A[i][j] == 'D' && A[j][i] != 'D') ok = false;
    }

    if (ok) {
        cout << "correct" << endl;
    } else {
        cout << "incorrect" << endl;
    }
}