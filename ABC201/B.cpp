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
int N, T[1005];
string S[1005];

int main() {
    int maxi = 0, maxInd = 0;
    int secMax = 0, secInd = 0;
    // input
    cin >> N;
    rep0(i, N) {
        cin >> S[i] >> T[i];
        if (T[i] > maxi) {
            maxi = T[i]; maxInd = i;
        }
    } 
    // solve
    rep0(i, N) {
        if (T[i] > secMax && T[i] < maxi) {
            secMax = T[i]; secInd = i;
        }
    }
    // output
    cout << S[secInd] << endl;
}