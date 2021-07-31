#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repi(i, a, b) for(int i = int(a); i < int(b); ++i)
ll N, ans;
unordered_map<ll, ll> p;

int main() {
    cin >> N;
    if (N == 1) {
        cout << 0 << endl;
        return 0;
    }
    for (ll i = 2; i <= N / i; i++) {
        while (N % i == 0) {
            p[i]++;
            N /= i;
        }
    }
    if (N != 1) {
        p[N]++;
    }
    for (auto x: p) {
        for (int i = 1; i < 1000; i++) {
            if (x.second - i >= 0) {
                ans++;
                x.second -= i;
            }
        }
    }
    cout << ans << endl;
}