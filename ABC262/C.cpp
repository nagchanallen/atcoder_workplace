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
int N, a[500005];
vector<pair<int, int>> v;
vector<int> u, t;
bool done[500005];
map<int, set<int>> mp;

int main() {
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cin >> a[i];
        v.push_back({a[i], i});
        t.push_back(a[i]);
        mp[a[i]].insert(i);
        if (a[i] == i) {
            u.push_back(i);
        }
    }

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());
    sort(t.begin(), t.end());

    ll cnt = 0;

    for (int i = 0; i < N; ++i) {
        if (v[i].first == v[i].second) {
            auto temp = u.size() - (upper_bound(u.begin(), u.end(), v[i].first) - u.begin());
            cnt += temp;
        }
    }

    for (int i = 1; i <= N; ++i) {
        if (a[i] > i && mp[i].count(a[i]) > 0) {
            cnt++;
        }
    }

    cout << cnt << endl;
}