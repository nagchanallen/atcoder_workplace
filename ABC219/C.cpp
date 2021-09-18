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
string X;
ll N, M[30], A[30];

int main() {
    // input
    cin >> X;
    for (ll i = 0; i < 26; ++i) {
        M[int(X[int(i)]) % 97] = i;
        A[i] = int(X[int(i)]) % 97;
    }
    cin >> N;
    // solve
    vector<string> S; 
    for (int i = 0; i < N; ++i) {
        string s; cin >> s;
        string t = "";
        rep0(j, s.length()) t = t + char(97 + M[int(s[j]) % 97]); 
        S.push_back(t);
    }
    sort(S.begin(), S.end());
    for (int i = 0; i < N; ++i) {
        string t = "";
        string s; s = S[i];
        rep0(j, s.length()) t = t + char(97 + A[int(s[j]) % 97]); 
        cout << t << endl;
    }
}