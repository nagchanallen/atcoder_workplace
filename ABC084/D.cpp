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
int Q;
vector<bool> is_prime;
vector<int> prime, similar;
int main() {
    // input
    cin >> Q;
    // solve
    is_prime.assign(100001, true);
    is_prime[0] = false; is_prime[1] = false;
    for (int i = 2; i <= 100000; ++i) {
        if (is_prime[i]) {
            prime.push_back(i);
            for (int j = 2 * i; j <= 100000; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 1; i <= 100000; i += 2) {
        if (is_prime[i] && is_prime[(i + 1) / 2]) {
            similar.push_back(i);
        }
    }
    for (int i = 0; i < Q; ++i) {
        int l, r;
        cin >> l >> r;
        cout << upper_bound(similar.begin(), similar.end(), r) - lower_bound(similar.begin(), similar.end(), l) << endl;
    }

}