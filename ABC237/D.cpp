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
pair<int, int> v[800000];

int main() {
    cin >> N;
    for (int i = 0; i <= N; ++i) {
        v[i].first = -1;
        v[i].second = -1;
    }
    for (int i = 1; i <= N; ++i) {
        char c; cin >> c;
        if (c == 'L') {
            if (v[i - 1].first >= 0) v[v[i - 1].first].second = i;
            v[i].first = v[i - 1].first;
            v[i - 1].first = i;
            v[i].second = i - 1;
        } else {
            if (v[i - 1].second >= 0) v[v[i - 1].second].first = i;
            v[i].second = v[i - 1].second;
            v[i - 1].second = i;
            v[i].first = i - 1;
        }
    }
    int left;
    for (int i = 0; i <= N; ++i) {
        if (v[i].first == -1) left = i;
    }
    int temp = left;
    for (int i = 0; i <= N; ++i) {
        cout << temp << ' ';
        if (temp == -1) break;
        temp = v[temp].second;
    }
    cout << endl;
}