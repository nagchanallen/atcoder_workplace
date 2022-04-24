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
string S;
unordered_set<char> st;

int main() {
    cin >> S;
    bool have_lo = false, have_hi = false;
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] >= 'a' && S[i] <= 'z') {
            have_lo = true;
        }
        if (S[i] >= 'A' && S[i] <+ 'Z') {
            have_hi = true;
        }
        st.insert(S[i]);
    }
    if (have_lo && have_hi && st.size() == S.size()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}