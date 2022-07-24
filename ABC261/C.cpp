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
map<string, int> mp;
int N;
string S[200005];

int main() {
    cin >> N;
    rep1(i, N) cin >> S[i];

    rep1(i, N) {
        if (mp.find(S[i]) == mp.end()) {
            cout << S[i] << endl;
        } else {
            cout << S[i] << "(" << mp[S[i]] << ")" << endl;
        }
        mp[S[i]]++;
    }
}