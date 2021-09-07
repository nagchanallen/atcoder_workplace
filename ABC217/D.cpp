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
int L, Q, c[200005], x[200005];
 
int main() {
    // input
    cin >> L >> Q;
    // solve
    set<int> temp;
    rep0(i, Q) {
        int c, x; cin >> c >> x;
        if (c == 1) {
            // c == 1
            temp.insert(x);
        } else {
            // c == 2
            int up, down;
            auto up_ind = temp.lower_bound(x);
            if (up_ind == temp.end()) {
                up = L;
            } else {
                up = *up_ind;
            }
            if (up_ind == temp.begin()) {
                down = 0;
            } else {
                down = *--up_ind;
            }
            cout << up - down << endl;
        }
    }
}