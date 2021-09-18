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
string S1, S2, S3, T;

int main() {
    // input
    cin >> S1; cin >> S2; cin >> S3; cin >> T;
    // solve
    string temp = "";
    for (int i = 0; i < T.size(); ++i) {
        if (T[i] == '1') {
            temp = temp + S1;
        } else if (T[i] == '2') {
            temp = temp + S2;
        } else {
            temp = temp + S3;
        }
    }
    // output
    cout << temp << endl;
}