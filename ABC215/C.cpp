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
string S;
int K;

int main() {
    // input
    cin >> S >> K;
    char temp[S.length() + 1];
    rep0(i, S.length()) temp[i] = S[i];
    sort(temp, temp + S.length());
    int cnt = 1;
    // solve
    do {
        if (cnt == K) break;
        cnt++;
    } while (next_permutation(temp, temp + S.length()));
    // output
    rep0(i, S.length()) cout << temp[i];
    cout << endl;
}