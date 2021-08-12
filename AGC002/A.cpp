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
int a, b;

int main() {
    // input
    cin >> a >> b;
    // output
    if (a <= 0 && b >= 0) {
        cout << "Zero" << endl;
    } else if (a > 0 && b > 0) {
        cout << "Positive" << endl;
    } else if ((b - a + 1) % 2 == 0) {
        cout << "Positive" << endl;
    } else {
        cout << "Negative" << endl;
    }
}