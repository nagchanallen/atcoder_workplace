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
int N, A[3000];
unordered_set<int> temp;

int main() {
    cin >> N;
    rep0(i, N) {
        cin >> A[i];
        temp.insert(A[i]);
    }
    for (int i = 0; i <= 2001; ++i) {
        if (temp.count(i) == 0) {
            cout << i << endl;
            return 0;
        }
    }
}