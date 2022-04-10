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
string s[105], t[105];
unordered_map<string, int> mp;


int main() {
    cin >> N;
    rep1(i, N) {
        cin >> s[i]; cin >> t[i];
        mp[s[i]]++;
        if (s[i] != t[i]) {
            mp[t[i]]++;
        }
    }

    rep1(i, N) {
        if (mp[s[i]] > 1 && mp[t[i]] > 1) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}