#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
using Graph = vector<vector<int>>;
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
int A, B;

int main() {
    // input
    cin >> A >> B;
    // solve
    int C;
    for (int i = 0; i < 256; ++i) {
        if ((A ^ i) == B) {
            C = i;
        }
    }
    // output
    cout << C << endl;
}