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
ll N;

int main() {
    // input
    cin >> N;    
    // solve
    int k = 0;
    while (N > 1) {
        N /= 2;
        k++;
    }
    // output
    cout << k << endl;
}