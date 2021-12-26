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
int L, R; string S; char temp[200005];

int main() {
    cin >> L >> R; L--;
    cin >> S;
    for (int i = 0; i < S.length(); ++i) temp[i] = S[i];
    reverse(temp + L, temp + R);
    for (int i = 0; i < S.length(); ++i) cout << temp[i];
    cout << endl;
}