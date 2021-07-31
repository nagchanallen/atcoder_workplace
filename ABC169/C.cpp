#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repi(i, a, b) for(int i = int(a); i < int(b); ++i)
ll A;
double B;

int main() {
    cin >> A >> B;
    ll C = round(B * 100);
    ll p = A * C;
    if (p < 100) {
        cout << 0 << endl;
        return 0;
    }
    string s = to_string(p);
    cout << s.substr(0, s.length() - 2) << endl;
}