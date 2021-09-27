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
int N; string S;

pair<bool, int> validate(string s) {
    int cnt = 0;
    bool ok = true;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') cnt++;
        if (s[i] == ')') cnt--;
        if (cnt < 0) ok = false;
    }
    return make_pair(cnt == 0 && ok, cnt);
}

int main() {
    // input
    cin >> N;
    cin >> S;
    // solve
    bool ok = validate(S).first;
    int cnt = validate(S).second; 
    while (!ok) {
        if (cnt <= 0) {
            S = '(' + S;
        } else {
            S = S + ')';
        }
        auto p = validate(S); ok = p.first; cnt = p.second;
    }
    // output
    cout << S << endl;
}