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
string N;
ll ans = 0;
bool ok (vector<int> str) {
    return (str.size() > 0 && str.size() < N.length() && str[0] != 0);
}

int main() {
    // input
    cin >> N;
    // solve
    for (int i = 0; i < (1 << N.length()); ++i) {
        vector<int> temp1;
        vector<int> temp2;
        for (int j = 0; j < N.length(); ++j) {
            if (i & (1 << j)) {
                temp1.push_back(N[j] - 48);
            } else {
                temp2.push_back(N[j] - 48);
            }
        }
        sort(temp1.begin(), temp1.end());
        sort(temp2.begin(), temp2.end());
        do {
            do {
                if (ok(temp1) && ok(temp2)) {
                    ll a = 0, b = 0;
                    for (int m = 0; m < temp1.size(); ++m) {
                        a += temp1[temp1.size() - 1 - m] * pow(10, m);
                    }
                    for (int m = 0; m < temp2.size(); ++m) {
                        b += temp2[temp2.size() - 1 - m] * pow(10, m);
                    }
                    ans = max(ans, a * b);
                }
            } while (next_permutation(temp1.begin(), temp1.end()));
        } while (next_permutation(temp2.begin(), temp2.end()));
    }
    cout << ans << endl;
}