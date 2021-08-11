#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

using Graph = vector<vector<int>>;
Graph G;
// global variables
int A, B;
string S;

bool checkNum(char a) {
    bool isNum = false;
    rep0(i, 10) {
        char num = '0' + i;
        if (a == num) isNum = true;
    }
    return isNum;
}

int main() {
    // input
    cin >> A >> B;
    cin >> S;
    // output
    if (S.length() == (A + B + 1) && S[A] == '-') {
        rep0(i, S.length()) {
            if (!checkNum(S[i]) && i != A) {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}