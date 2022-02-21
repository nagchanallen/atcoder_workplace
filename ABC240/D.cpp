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
int N, a[200005];
vector<pair<int, int>> cy;

int main() {
    cin >> N;
    rep1(i, N) cin >> a[i];

    int len = 0, cur = 0;
    cy.push_back({0, 0});
    rep1(i, N) {
        // cout << i << ' ' << a[i] << ' ' << cur << endl;
        if (a[i] != cur) {
            cy.push_back({a[i], 1});
            cur = a[i];
        } else {
            cy[cy.size() - 1].second++;
        }
        len++;
        if (cy[cy.size() - 1].first == cy[cy.size() - 1].second) {
            len -= cy[cy.size() - 1].second;
            cy.pop_back();
            cur = cy[cy.size() - 1].first;
        }
        cout << len << endl;
    }
}