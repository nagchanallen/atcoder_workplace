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

int main() {
    // input
    cin >> N;    
    // solve
    if (N <= 9) {
        cout << "000" << N << endl;
    } else if (N <= 99) {
        cout << "00" << N << endl;
    } else if (N <= 999) {
        cout << "0" << N << endl;
    } else {
        cout << N << endl;
    }
}