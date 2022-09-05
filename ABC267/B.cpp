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
vector<bool> col;

int main() {
    cin >> S;
    col.push_back(S[6] == '1');
    col.push_back(S[3] == '1');
    col.push_back(S[7] == '1' || S[1] == '1');
    col.push_back(S[4] == '1' || S[0] == '1');
    col.push_back(S[8] == '1' || S[2] == '1');
    col.push_back(S[5] == '1');
    col.push_back(S[9] == '1');
    if (S[0] == '1') {
        cout << "No" << endl;
        return 0;
    }

    bool ans = false;
    for (int i = 0; i < 7; ++i) {
        for (int j = i + 2; j < 7; ++j) {
            for (int k = i + 1; k < j; ++k) {
                if (col[i] == true && col[j] == true && col[k] == false) {
                    ans = true;
                }
            }
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}