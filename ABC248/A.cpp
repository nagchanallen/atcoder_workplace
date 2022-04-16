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
set<char> st;

int main() {
    cin >> S;
    for (char c: S) {
        st.insert(c);
    }
    vector<char> v = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    for (char c: v) {
        if (st.count(c) == 0) {
            cout << c << endl;
            return 0;
        }
    }
}