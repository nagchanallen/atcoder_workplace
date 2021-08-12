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

int main() {
    // input
    cin >> S;
    // solve
    bool cnt[150];
    for (int i = 97; i <= 122; ++i) {
        cnt[i] = false;
    }
    for (auto s: S) {
        cnt[int(s)] = true;
    }
    int mini = 1000;
    for (int i = 97; i <= 122; ++i) {
        if (!cnt[i]) {
            mini = min(mini, i);
        }
    }
    // output
    if (mini == 1000) {
        cout << "None" << endl;
    } else {
        cout << char(mini) << endl;
    }
}