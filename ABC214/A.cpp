#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

using Graph = vector<vector<int>>;
Graph G;
// global variables
int N;

int main() {
    // input
    cin >> N;
    // solve

    // output
    if (N <= 125) {
        cout << 4 << endl;
    } else if (N <= 211) {
        cout << 6 << endl;
    } else {
        cout << 8 << endl;
    }
}