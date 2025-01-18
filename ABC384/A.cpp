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
int N;
char c1, c2;
string S;

int main() {
    cin >> N >> c1 >> c2;
    cin >> S;

    string ans = "";
    for (char s: S) {
        if (s != c1) {
            ans += c2;
        } else {
            ans += c1;
        }
    }

    cout << ans << endl;
}