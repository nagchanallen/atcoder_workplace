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
int K;
string A, B;

int main() {
    // input
    cin >> K;
    cin >> A >> B;
    ll Anum = 0, Bnum = 0;
    // solve
    reverse(A.begin(), A.end());
    for (int i = 0; i < A.size(); ++i) {
        Anum += ((A[i] - 48) * pow(K, i));
    }
    reverse(B.begin(), B.end());
        for (int i = 0; i < B.size(); ++i) {
        Bnum += ((B[i] - 48) * pow(K, i));
    }
    cout << Anum * Bnum << endl;
}