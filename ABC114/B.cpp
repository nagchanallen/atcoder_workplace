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
string S;
int mini = INTINF;

int main() {
    // input
    cin >> S;
    // solve
    for (int i = 0; i < S.length() - 2; ++i) {
        int num = stoi(S.substr(i, 3));
        mini = min(mini, abs(num - 753));
    }
    // output
    cout << mini << endl;
}