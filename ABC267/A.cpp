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

int main() {
    cin >> S;
    if (S == "Monday") {
        cout << 5 << endl;
    } else if (S == "Tuesday") {
        cout << 4 << endl;
    } else if (S == "Wednesday") {
        cout << 3 << endl;
    } else if (S == "Thursday") {
        cout << 2 << endl;
    } else if (S == "Friday") {
        cout << 1 << endl;
    }
}