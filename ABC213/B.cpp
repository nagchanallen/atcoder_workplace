#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
using Graph = vector<vector<int>>;
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
int N;

int main() {
    // input
    cin >> N;
    vector<pair<int, int>> a;
    rep0(i, N) {
        int A;
        cin >> A;
        a.push_back(make_pair(A, i + 1));
    }

    sort(a.begin(), a.end());
    // output
    cout << a[N - 2].second << endl;
}