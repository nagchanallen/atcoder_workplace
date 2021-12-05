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
string A, B;

int main() {
    cin >> A >> B;
    if (B == "1") {
        cout << 5000000000 + stoll(B) << endl;
        return 0;
    } 
    ll tempA = stoi(A);
    ll tempA2 = tempA * 2;
    cout << stoll(B + to_string(tempA2)) / 2 << endl;
}