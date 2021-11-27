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
    // input
    cin >> A >> B;    
    // solve
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    for (int i = 0; i < min(A.size(), B.size()); ++i) {
        string a(1, A[i]), b(1,B[i]);
        if (stoi(a) + stoi(b) >= 10) {
            cout << "Hard" << endl;
            return 0;
        }
    }
    cout << "Easy" << endl;
}