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
int N, A[2000], B[2000], same = 0, exist = 0;
unordered_set<int> st;

int main() {
    cin >> N;
    rep0(i, N) {
        cin >> A[i];
        st.insert(A[i]);
    }
    rep0(i, N) {
        cin >> B[i];
        if (st.count(B[i]) > 0) {
            exist++;
        }
    }
    rep0(i, N) {
        if (A[i] == B[i]) {
            same++;
        }
    }
    cout << same << endl;
    cout << exist - same << endl;
}