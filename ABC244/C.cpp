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
int N;
unordered_map<int, bool> mp;

int main() {
    cin >> N;
    for (int i = 2; i <= 2 * N + 1; ++i) {
        mp[i] = true;
    }
    cout << 1 << endl;
    int temp = 1;
    while (true) {
        int input;
        cin >> input;
        if (input == 0) return 0;
        temp = input;
        mp[temp] = false;
        for (int j = 2; j <= 2 * N + 1; ++j) {
            if (mp[j]) {
                cout << j << endl;
                mp[j] = false;
                break;
            }
        }
    }
}