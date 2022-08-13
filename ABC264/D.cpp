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
string S;
map<string, int> mp;
queue<string> q;

int main() {
    cin >> S;

    q.push(S);
    mp[S] = 0;
    while (!q.empty()) {
        string s = q.front(); q.pop();
        int cnt = mp[s];
        for (int i = 0; i < 6; ++i) {
            swap(s[i], s[i + 1]);
            if (mp.find(s) == mp.end()) {
                mp[s] = cnt + 1;
                q.push(s);
            }
            swap(s[i], s[i + 1]);
        }
    }

    cout << mp["atcoder"] << endl;
}