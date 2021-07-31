#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
using Graph = vector<vector<int>>;
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

int main() {
    string X;
    vector<int> a;
    cin >> X;
    for (char x: X) {
        a.push_back((int)x);
    }
    if (X[0] == X[1] && X[1] == X[2] && X[2] == X[3]) {
        cout << "Weak" << endl;
    } else {
        int cnt = 0;
        rep0(i, 3) {
            if ((a[i] + 1) % 10 == (a[i + 1]) % 10) {
                cnt++;
            }
        }
        if (cnt == 3) {
            cout << "Weak" << endl;
        } else {
            cout << "Strong" << endl;
        }
    }
}